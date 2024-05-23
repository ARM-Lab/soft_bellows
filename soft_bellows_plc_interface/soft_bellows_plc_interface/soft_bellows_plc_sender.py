import numpy as np
import socket
import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class PLC_interface_sender(Node):

    # UDP parameters
    UDP_IP = "192.168.1.100"                     # IP address of PLC
    UDP_PORT = 12050    

    def __init__(self):
        super().__init__("soft_bellows_plc_sender")
        self.timer_ = self.create_timer(1, self.send_packet)
        self.get_logger().info("Sender started...")

    def send_packet(self):
        message = "pStart:0.11,2.22,3.33,4.44,5.55,6.66,7.77,8.88,pEnd"
        message = str.encode(message)
        sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        sock.sendto(message, (self.UDP_IP, self.UDP_PORT))
        self.get_logger().info("message:"+str(message))

def main(args=None):
    rclpy.init(args=args)
    node = PLC_interface_sender()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main":
    main()
    