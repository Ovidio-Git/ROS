import sys

import .RPM_Interface
import rclpy
from rclpy.node import Node


class MinimalClientAsync(Node):

    def __init__(self):
        super().__init__('RPMClient')
        self.cli = self.create_client(RPM_Interface, 'rpm')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = RPM_Interface.Request()

    def send_request(self):
        self.req.a = int(sys.argv[1])
        self.req.b = int(sys.argv[2])
        self.future = self.cli.call_async(self.req)


def Run(args=None):
    rclpy.init(args=args)

    RPM_client  = RPMClient()
    RPM_client .send_request()

    while rclpy.ok():
        rclpy.spin_once(RPM_client)
        if RPM_service .future.done():
            try:
                response = RPM_client .future.result()
            except Exception as e:
                minimal_client.get_logger().info(
                    'Service call failed %r' % (e,))
            else:
                minimal_client.get_logger().info(
                    'Result of add_two_ints: for %d vel = %d' %
                    (RPM_client.req.RPM,  RPM_client.vel))
            break

    RPM_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    Run()
