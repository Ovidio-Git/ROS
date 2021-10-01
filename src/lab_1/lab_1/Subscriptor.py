import rclpy
from rclpy.node import Node
from std_msgs.msg import String


class Subscriptor(Node):

    def __init__(self):
        super().__init__('nodo')
        self.subcripcion = self.crear_subcripcion(
            String,
            'Llantas',
            self.Subscribirse,
            10)
        self.subcripcion  # prevent unused variable warning

    def Subscribirse(self, msg):
        self.get_logger().info('RPM: "%s"' % msg.data)


def Run():
    rclpy.init(args=args)
    nodo = Subscriptor()
    rclpy.spin(nodo)
    nodo.destroy_node()   #Realizamos la destrucción de los nodos una vez terminado el programa
    rclpy.shutdown()


if __name__ == '__main__':
    Run()
