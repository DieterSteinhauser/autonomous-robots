import rclpy # Python library for ROS 2 
from rclpy.node import Node 
from geometry_msgs.msg import Twist

PI = 3.14159
TAU = 2*PI

class CircleDraw(Node): 
    
    def __init__(self): 
        
        super().__init__('PoseMove') 
        self.vel_pub = self.create_publisher(Twist, '/turtle1/cmd_vel', 10) 
        self.vel = Twist() 
        self.radius = 2.5 
        self.linear_velocity = 2.0  # Constant forward speed 
        
        # Set angular velocity based on the radius 
        self.angular_velocity = self.linear_velocity / self.radius 
        
        # Set initial movement direction 
        self.vel.linear.x = self.linear_velocity 
        self.vel.angular.z = self.angular_velocity 
        
        # create a time with a publish rate 
        timer_period = 0.1  # seconds  
        self.timer = self.create_timer(timer_period, self.publish) 
 
    def publish(self): 
        
        # modify the linear and angular velocity to enable inward spiral
        #self.vel.linear.x -= 0.001*PI
        # self.vel.angular.z += 0.002*TAU
        
        # Publish velocity command to move the turtle 
        self.vel_pub.publish(self.vel) 
        
        
def main():
    print('hello world!')
    
    # Initialize rclpy
    rclpy.init()
    
    # instantiate the Node
    circle_draw = CircleDraw()
    
    # Prompt ROS to continously run the Node
    rclpy.spin(circle_draw)
    
    print('EOF')
    
        
# Main Process    
if __name__ == '__main__':
    main()
    