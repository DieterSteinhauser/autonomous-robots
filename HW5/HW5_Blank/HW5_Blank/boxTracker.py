"""
EEL 4930/5934: Autonomous Robots
University Of Florida
"""
import cv2
import numpy as np
from KF_4D import KF_4D


def boxDetector(image):
    """  OpenCV function for bounding box detection
        - detects edges, applies threshold to binary image space 
        - then find object countours 
        - then returns the bounding box (rectangle) around the detected circle
    """
    gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY) # get gray image
    img_edges = cv2.Canny(gray,  50, 190, 3) # detect edges
    ret, img_thresh = cv2.threshold(img_edges, 254, 255, cv2.THRESH_BINARY) # convert to binary images
    contours, _ = cv2.findContours(img_thresh, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE) # get object contours

    """
    Your code for returning bounding box (rectangle) instead of the circle
    """
    cv2.imshow('contours', img_thresh)
    return boxes



# OpenCV video capture object
VideoCap = cv2.VideoCapture('data/rBall.avi')

"""
# Create Kalman Filter object KF_4D
"""
filter = KF_4D("You will call the function")

# Track bounding box (predict + update) using KF_4D
while(True):
    ret, frame = VideoCap.read() # Read frame
    box = boxDetector(frame) # Detect object
    
    """
       Your code
    """

    # Show output and wait for keypress
    cv2.imshow('image', frame)
    if cv2.waitKey(2) & 0xFF == ord('q'):
        VideoCap.release()
        cv2.destroyAllWindows()
        break
    cv2.waitKey(25)

