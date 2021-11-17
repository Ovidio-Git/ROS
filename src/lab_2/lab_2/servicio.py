import .RPM_Interface
import rclpy
from rclpy.node import Node
import math 


class RPMService(Node):

    def __init__(self):
        super().__init__('RPM_service')
        self.srv = self.create_service(RPM_Interface, 'rpm', self.RPM_callback)

    def RPM_callback(self, request, response):
        response.vel = request.rpm * ((2*math.pi)/60) * 0.1
        self.get_logger().info('RPM: %d' % (request.rpm))
        return response


def Run():
    rclpy.init(args=None)
    RPM_service = RPMService()
    rclpy.spin(RPM_service)
    rclpy.shutdown()


if __name__ == '__main__':
    Run()
