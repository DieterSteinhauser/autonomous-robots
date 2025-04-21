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

    # Inserted code here
    
    # initialize the boxes and centers lists
    boxes = []
    centers=[]
    
    min_radius, max_radius = 3, 30
    
    # if there are contours in the image, proceed with bounding box detection
    if contours:
        
        # loop through each contour in the image
        for contour in contours:
            
            # Find the minimum enclosing circle around the contour
            (x, y), radius = cv2.minEnclosingCircle(contour)
            radius = int(radius)
            
            # if the radius is within the specified range
            if (radius > min_radius) and (radius < max_radius): # Take only the valid circle(s)
                
                # add the center of the circle to the centers list
                centers.append(np.array([[x], [y]]))
                
                # add the bounding box around the circle to the boxes list
                x, y, w, h = cv2.boundingRect(contour)
                boxes.append((x, y, w, h))
    
    cv2.imshow('contours', img_thresh)
    return boxes, centers



# OpenCV video capture object
VideoCap = cv2.VideoCapture('data/rBall.avi')

"""
# Create Kalman Filter object KF_4D
"""
dt = 0.1 # Sampling time
u_x = 1  # Acceleration in x-direction
u_y = 1  # Acceleration in y-direction
u_w = 1  # Acceleration in w-direction
u_h = 1  # Acceleration in h-direction
std_acc = 1 # Process noise magnitude
x_std_meas = 0.1  # Standard deviation of the measurement in x-direction
y_std_meas = 0.1  # Standard deviation of the measurement in y-direction
w_std_meas = 0.1  # Standard deviation of the measurement in w-direction
h_std_meas = 0.1  # Standard deviation of the measurement in h-direction
filter = KF_4D(dt, u_x, u_y, u_w, u_h, std_acc, x_std_meas, y_std_meas, w_std_meas, h_std_meas)

# Track bounding box (predict + update) using KF_4D
while(True):
    ret, frame = VideoCap.read() # Read frame
    boxes, centers = boxDetector(frame) # Detect object


    if boxes:
        x, y, w, h = boxes[0]
        measurement = np.matrix([[x], [y], [w], [h]])
        
        # Draw measured circle and box in Yellow
        cv2.circle(frame, (int(centers[0][0]), int(centers[0][1])), 10, (0, 191, 255), 2)
        cv2.rectangle(frame, (x, y), (x + w, y + h), (0, 191, 255), 2)
        cv2.putText(frame, "Measured Position", (x + 15, y - 15), 0, 0.5, (0, 191, 255), 2)
        
        # Draw predicted box in Blue
        xp, yp, wp, hp = filter.predict().A.flatten().astype(int)

        # image = cv2.rectangle(image, start_point, end_point, color, thickness)
        #cv2.rectangle(frame, (xp - int(wp/2), yp - int(hp/2)), (xp + int(wp/2), yp + int(hp/2)), (255, 0, 0), 2)
        cv2.rectangle(frame, (xp, yp), (xp + wp, yp + hp), (255, 0, 0), 2)
        cv2.putText(frame, "Predicted Position", (xp + 15, yp - 15), 0, 0.5, (255, 0, 0), 2)
        
        # Draw updated estimation box in Red
        xu, yu, wu, hu = filter.update(measurement).A.flatten().astype(int)
        
        # image = cv2.rectangle(image, start_point, end_point, color, thickness)
        #cv2.rectangle(frame, (xu - int(wu/2), yu - int(hu/2)), (xu + int(wu/2), yu + int(hu/2)), (0, 0, 255), 2)
        cv2.rectangle(frame, (xu, yu), (xu + wu, yu + hu), (0, 0, 255), 2)
        cv2.putText(frame, "Estimated Position", (xu + 15, yu - 15), 0, 0.5, (0, 0, 255), 2)
  
    # Show output and wait for keypress
    cv2.imshow('image', frame)
    if cv2.waitKey(2) & 0xFF == ord('q'):
        VideoCap.release()
        cv2.destroyAllWindows()
        break
    cv2.waitKey(25)

