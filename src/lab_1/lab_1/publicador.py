import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class publicador(Node): # creamos una clase llamada publicador la cual va a heredar la clase node
	
    def __init__(self):
    	super().__init__('nodo') #usamos nuestro constructor con el nombre de nuestro nodo en este caso el nodo que creamos se llama "node"   
    	self.publicador_ = self.crear_publicador(String, 'Llantas', 10) # llamamos el metodo
    	# string para que le de a nuestro mensaje el formato necesario para la transmicion y comunicacion con el nodo, adicional a esto
    	# creamos el topico al que nos subscribiremos al cual llamaremos "Llantas", con una cola de espera de 10
	
    	#ahora definiremos cada cuanto se llevara a cabo la publicacion
    	tiempo = 1  # la setearemos en 1 segundo
    	self.timer = self.create_timer(tiempo, self.publicacion)

    def publicacion(self):
        msg = String() #realizamos la instanciacion de la clase string
        msg.data = 'RPM: 148' # definimos el mensaje que enviaremos, con el valor de las revoluciones
        self.publicador_.publish(msg)
        self.get_logger().info('Mensaje Publicado: "%s"' % msg.data) #publicamos el mensaje predefinido


def Run():	
    rclpy.init(args=args) #inicializamos la libreria rclpy
    nodo = publicador()   #Creamos el nodo
    rclpy.spin(nodo)      
    nodo.destroy_node()   #Realizamos la destrucción de los nodos una vez terminado el programa
    rclpy.shutdown()


if __name__ == '__main__':
    Run()
