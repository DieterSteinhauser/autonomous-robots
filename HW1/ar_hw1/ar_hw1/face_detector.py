import os
import rclpy # Python library for ROS 2 
from rclpy.node import Node 
from sensor_msgs.msg import Image # Image is the message type 
from cv_bridge import CvBridge #Convert between ROS and OpenCV Images 
import cv2 
from threading import Lock
from cv_bridge import CvBridge, CvBridgeError
 
class FaceDetector(Node): 

    def __init__(self):
        super().__init__('ar_hw1') # your ros node
        self.mutex = Lock()
        self.bridge = CvBridge() # open-cv bridge
        self.topic = '/camera1/image_raw'
        self.subscription = self.create_subscription(Image, self.topic, self.image_callback, 1) 
        self.publisher = self.create_publisher(Image, '/output/image', 1)
        self.original = None
        self.output_image = None
        
    def image_callback(self, data): 
        
        # Gather the image data from the subsribed topic
        try:
            self.original = self.bridge.imgmsg_to_cv2(data, "bgr8")
            print('image recieved from topic to sub')
        except CvBridgeError as e:
            print(e)
        
        # if the data is not none, process the image
        if self.original is None:
            print ('frame dropped, skipping detecting')
        else:
            print('image passed to processor')
            self.image_processor() # your processor function
    
    def image_processor(self):

        # Find the local directory for the harrcascade xml file from opencv
        local_dir = os.path.abspath(os.path.dirname(__file__))
        xml_file = os.path.join(local_dir, 'haarcascade_frontalface_default.xml')
        xml_file2 = "/home/boole/autonomous-robots/HW1/ar_hw1/ar_hw1/haarcascade_frontalface_default.xml"
        
        # haarcascade facial processing
        faceCascade = cv2.CascadeClassifier(xml_file2) 
        gray = cv2.cvtColor(self.original, cv2.COLOR_BGR2GRAY)
        faces = faceCascade.detectMultiScale(gray, scaleFactor=1.1, minNeighbors=5, minSize=(30, 30))
        
        # create the rectangle around the faces
        for (x, y, w, h) in faces: 
                cv2.rectangle(self.original, (x, y), (x+w, y+h), (0, 255, 0), 2)
                
        # attempt to pass to the publisher
        self.output_image = self.bridge.cv2_to_imgmsg(self.original, "bgr8") # encoding=bgr8
        
        try:
            self.publisher.publish(self.output_image)
            print('image published from published to topic ')
        except CvBridgeError as e:
            print(e)
            
def main():
    print('hello world!')
    
    # Initialize rclpy
    rclpy.init()
    
    # instantiate the Node
    FD = FaceDetector()
    
    # Prompt ROS to continously run the Node
    rclpy.spin(FD)
    
    print('EOF')
    
    
# Main Process    
if __name__ == '__main__':
    main()
    
