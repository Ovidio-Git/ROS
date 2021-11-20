import sys

from own_interfaces.srv import RPMvel
import rclpy
from rclpy.node import Node


class RPMClient(Node):

    def __init__(self):
        super().__init__('RPM_client')
        self.cli = self.create_client(RPMvel, 'rpm')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('error con el servicio')
        self.req = RPMvel.Request()

    def send_request(self):
        #self.req.a = float(sys.argv[1])
        self.future = self.cli.call_async(self.req)


def Run():
    rclpy.init()

    RPM_client  = RPMClient()
    RPM_client.send_request()
    while true:
        while rclpy.ok():
            rclpy.spin_once(RPM_client)
            if RPM_client.future.done():
                try:
                    response = RPM_client.future.result()
                except Exception as e:
                    RPM_client.get_logger().info(
                        'Llamada al servicio fallida %r' % (e,))
                else:
                    velocidad = float(response.vel) * (0.0104719733)
                    RPM_client.get_logger().info('Velocidad del robot:{:.2f} m/s'.format(velocidad))
                break

    RPM_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    Run()
