import rclpy
from rclpy.node import Node
from std_msgs.msg import String


class Subscriptor(Node):

    def __init__(self):
        super().__init__('nodo')
        self.subcripcion = self.create_subscription(   #nos subscribimos al topico llantas para obtener el valor de las RPM
            String,
            'Llantas',
            self.Subscribirse,
            10)
        self.subcripcion  # prevent unused variable warning

    def Subscribirse(self, msg):
        self.get_logger().info('Publicacion recibida: "%s"' % msg.data) # mostramos el mensaje recibido


def Run():
    rclpy.init(args=None) #inicializamos la libreria rclpy
    nodo = Subscriptor()
    rclpy.spin(nodo)
    nodo.destroy_node()   #Realizamos la destrucción de los nodos una vez terminado el programa
    rclpy.shutdown()


if __name__ == '__main__':
    Run()
