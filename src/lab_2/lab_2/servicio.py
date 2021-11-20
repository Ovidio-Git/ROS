from own_interfaces.srv import RPMvel
import rclpy
from rclpy.node import Node


class RPMService(Node):

    def __init__(self):
        super().__init__('RPM_service')
        self.srv = self.create_service(RPMvel, 'rpm', self.RPM_callback)

    def RPM_callback(self, request, response):
        #response.vel = float(request.a) * (0.0104719733)
        response.vel = 290
        self.get_logger().info('Valor constante RPM: %d' % (response.vel))
        return response


def Run():
    rclpy.init()
    RPM_service = RPMService()
    rclpy.spin(RPM_service)
    rclpy.shutdown()


if __name__ == '__main__':
    Run()
