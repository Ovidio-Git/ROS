import rclpy
import math 
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
        ########          Capturamos y convertimos el valor de las RPM     #######
        pub_msg = str(msg.data)
        mensaje, rpmstr = pub_msg.split()
        rpm = int(rpmstr)
        ########          calculamos la velocidad del vehiculo       ###########
        r= 10
        radio = r * 0.01 # Convertimos a metros
        velocida_angular = rpm * ((2*math.pi)/60) # calculamos el valor de la velocidad angular 
        velocidad = velocida_angular * radio # calculamos el valor de la velocidad
        self.get_logger().info('Velocidad del vehiculo:{:.2f}'.format(velocidad)) # mostramos el mensaje recibido


def Run():
    rclpy.init(args=None) #inicializamos la libreria rclpy
    nodo = Subscriptor()
    rclpy.spin(nodo)
    nodo.destroy_node()   #Realizamos la destrucción de los nodos una vez terminado el programa
    rclpy.shutdown()


if __name__ == '__main__':
    Run()
