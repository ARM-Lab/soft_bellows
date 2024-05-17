from setuptools import setup

package_name = 'soft_bellows_plc_interface'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='km',
    maintainer_email='ivan.virgala@tuke.sk',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "soft_bellows_plc_interface = soft_bellows_plc_interface.soft_bellows_plc_interface:main"
        ],
    },
)
