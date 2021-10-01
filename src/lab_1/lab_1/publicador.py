import rclpy
from rclpy.node import Node

from std_msgs.msg import String


class publicador(Node): # creamos una clase llamada publicador la cual va a heredar
# la calse node

    def __init__(self):
        super().__init__('node') #usamos nuestro contructor  con el nombre de nuestro nodo
# en este caso el nodo que creamos se llama node   
        self.publicador_ = self.crer_publicador(String, 'Llantas', 10) # llamamos el metodo
# string para que le de a nuestro mensaje el formato necesario para la trasmicion y comunicacion con el nodo, adicional a esto
# creamos el topico al que nos subscribiremos llamado Llantas, con una cola de espera de 10
        
	#ahora definiremos cada cuanto se llevara a cabo la publicacion
	tiempo = 1  # lo setearemos en 1 segundo
        self.timer = self.create_timer(tiempo, self.publicacion)


    def publicacion(self):
        msg = String()
        msg.data = 'RPM: 148'
        self.publicador_.publish(msg)
        self.get_logger().info('Publishing: "%s"' % msg.data)


def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
