import rclpy
import socket
from rclpy.node import Node
import numpy as np
from soft_bellows_msgs.msg import SoftBellowsPressure
from std_msgs.msg import String
import re

class PLC_interface_receiver(Node):
    def __init__(self):
        super().__init__("soft_bellows_plc_receiver")
        self.publisher = self.create_publisher(SoftBellowsPressure, '/soft_bellows/plc_receiver', 10)
        self.timer_ = self.create_timer(0.01, self.plc_receiver)
        self.get_logger().info("PLC listener started ...")
    
    def plc_receiver(self):
        localIP = "192.168.0.186" #41
        localPort = 12050
        sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        server_address = (localIP, localPort)
        sock.bind(server_address)
        data, addr = sock.recvfrom(1024)  
        data_udp = data.decode('utf-8')
        data_string = str(data_udp)
        pressure_real = data_string.split(',')
        pressure_message = SoftBellowsPressure()
        pressure = np.zeros(9)    
        for i in range(9): 
            pressure[i] = float(pressure_real[i])
        pressure_message.pressure_value = pressure
        self.publisher_.publish(pressure_message)
        self.get_logger().info("PLC:"+str(pressure_message))
        

def main(args=None):
    rclpy.init(args=args)
    node = PLC_interface_receiver()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main":
    main()
    