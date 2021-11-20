from own_interfaces.srv import RPMvel
import rclpy
from rclpy.node import Node
from time import sleep


class RPMClient(Node):

    def __init__(self):
        super().__init__('RPM_client')
        self.cli = self.create_client(RPMvel, 'rpm')
        self.req = RPMvel.Request()

    def send_request(self):
        self.future = self.cli.call_async(self.req)


def Run():
    
    rclpy.init()
    while True:
        RPM_client  = RPMClient()
        RPM_client.send_request()
        while rclpy.ok():
            rclpy.spin_once(RPM_client)
            if RPM_client.future.done():
                try:
                    response = RPM_client.future.result()
                except Exception as e:
                    RPM_client.get_logger().info(
                        'Llamada al servicio fallida %r' % (e,))
                else:
                    velocidad = response.vel * (0.1047197551)
                    RPM_client.get_logger().info('Velocidad Robot: {:.2f} m/s'.format(velocidad))
                    sleep(2)
                break
            
    RPM_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    Run()
