"""
EEL 4930/5934: Autonomous Robots
University Of Florida
"""

import numpy as np

class KF_4D(object):
    def __init__(self, dt, u_x, u_y, u_w, u_h, std_acc, x_std_meas, y_std_meas, w_std_meas, h_std_meas):
        """
        dt: sampling time (time for 1 cycle)
        u_x: acceleration in x-direction
        u_y: acceleration in y-direction
        u_w: acceleration in w-direction
        u_h: acceleration in h-direction
        std_acc: process noise magnitude
        x_std_meas: standard deviation of the measurement in x-direction
        y_std_meas: standard deviation of the measurement in y-direction
        w_std_meas: standard deviation of the measurement in w-direction
        h_std_meas: standard deviation of the measurement in h-direction
        """
        self.dt = dt # sampling time
        self.u = np.matrix([[u_x],[u_y],[u_w],[u_h]]) # control input variables
        self.x = np.matrix([[0], [0], [0], [0], [0], [0], [0], [0]]) # intial State
        
        # State Transition Matrix A
        self.A = np.matrix([[1, 0, 0, 0, self.dt, 0, 0, 0],
                            [0, 1, 0, 0, 0, self.dt, 0, 0],
                            [0, 0, 1, 0, 0, 0, self.dt, 0],
                            [0, 0, 0, 1, 0, 0, 0, self.dt],
                            [0, 0, 0, 0, 1, 0, 0, 0],
                            [0, 0, 0, 0, 0, 1, 0, 0],
                            [0, 0, 0, 0, 0, 0, 1, 0],
                            [0, 0, 0, 0, 0, 0, 0, 1]])
        
        # Control Input Matrix B
        self.B = np.matrix([[(self.dt**2)/2, 0, 0, 0],
                            [0,(self.dt**2)/2, 0, 0],
                            [0,0,(self.dt**2)/2, 0],
                            [0,0,0,(self.dt**2)/2],
                            [self.dt,0,0,0],
                            [0,self.dt,0,0],
                            [0,0,self.dt,0],
                            [0,0,0,self.dt]])
        
        # Measurement Mapping Matrix
        self.H = np.matrix([[1, 0, 0, 0, 0, 0, 0, 0],
                            [0, 1, 0, 0, 0, 0, 0, 0],
                            [0, 0, 1, 0, 0, 0, 0, 0],
                            [0, 0, 0, 1, 0, 0, 0, 0]])
        
        # Initial Process Noise Covariance
        self.Q = np.matrix([[(self.dt**4)/4, 0, 0, 0, (self.dt**3)/2, 0, 0, 0],
                            [0, (self.dt**4)/4, 0, 0, 0, (self.dt**3)/2, 0, 0],
                            [0, 0, (self.dt**4)/4, 0, 0, 0, (self.dt**3)/2, 0],
                            [0, 0, 0, (self.dt**4)/4, 0, 0, 0, (self.dt**3)/2],
                            [(self.dt**3)/2, 0, 0, 0, self.dt**2, 0, 0, 0],
                            [0, (self.dt**3)/2, 0, 0, 0, self.dt**2, 0, 0],
                            [0, 0, (self.dt**3)/2, 0, 0, 0, self.dt**2, 0],
                            [0, 0, 0, (self.dt**3)/2, 0, 0, 0, self.dt**2]]) * std_acc**2
        
        #Initial Measurement Noise Covariance
        self.R = np.matrix([[x_std_meas**2, 0, 0, 0],
                            [0, y_std_meas**2, 0, 0],
                            [0, 0, w_std_meas**2, 0],
                            [0, 0, 0, h_std_meas**2]])
        
        #Initial Covariance Matrix
        self.P = np.eye(self.A.shape[1])
        
    def predict(self):
        ## complete this function
        
        # Update time state (self.x): x_k =Ax_(k-1) + Bu_k
        self.x = self.A * self.x + self.B * self.u
        
        # Calculate error covariance (self.P): P= A*P*A' + Q
        self.P = self.A * self.P * self.A.T + self.Q
        
        return self.x[0:4]
    
    def update(self, z):
        ## complete this function
        
        # Calculate S = H*P*H'+R
        S = self.H * self.P * self.H.T + self.R
        
        # Calculate the Kalman Gain K = P * H'* inv(S)
        K = self.P * self.H.T * np.linalg.inv(S)
        
        # Update self.x
        self.x = self.x + K *(z - self.H * self.x)
        
        # Update error covariance matrix self.P
        self.P = (np.eye(self.A.shape[1]) - K * self.H) * self.P
        
        return self.x[0:4]
