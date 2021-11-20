import sys
from own_interfaces.srv import RPMvel
import rclpy
from rclpy.node import Node

class RPMService(Node):

    def __init__(self):
        super().__init__('RPM_service')
        self.srv = self.create_service(RPMvel, 'rpm', self.RPM_callback)

    def RPM_callback(self, request, response):
        RpmporRadio = float(sys.argv[1])*(float(sys.argv[2]) * 0.01)
        response.vel = RpmporRadio
        self.get_logger().info('Valor RPM: {} Valor radio: {}'.format(sys.argv[1],sys.argv[2]))
        return response

def Run():
    rclpy.init()
    RPM_service = RPMService()
    rclpy.spin(RPM_service)
    rclpy.shutdown()


if __name__ == '__main__':
    Run()
