"""
EEL 4930/5934: Autonomous Robots
University Of Florida
"""

import numpy as np

class KF_4D(object):
    def __init__(self, dt, u_x, u_y, std_acc, x_std_meas, y_std_meas):
        """
            You will define your control variables
        """
        


    def predict(self):
        ## complete this function
        
        return self.x[0:4]


    def update(self, z):
        ## complete this function
        
        return self.x[0:4]
