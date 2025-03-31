"""
EEL 4930/5934: Autonomous Robots
University Of Florida
"""

import matplotlib.pyplot as plt
from PIL import Image
import numpy as np
import os

class Visualization:

    def __init__(self, map_path, animation, alg='Bug'):
        self.map_path = map_path
        self.map_data = None
        self.start, self.end = None, None
        self.radius = 5
        self.alg = alg
        self.break_loop = False
        self.fig, self.ax = None, None
        self.animation = animation


    def get_map(self):
        '''        
        Loads the map from file.
        Returns: map_data: array of the map
        '''
        # Check if the file exists
        if not os.path.exists(self.map_path):
            raise FileNotFoundError(f"Map file not found: {self.map_path}")
        
        try:
            # Load the map file
            img = Image.open(self.map_path)
            img = img.convert('L')  # Ensure it's grayscale
            map_array = np.array(img)
            
            # Convert the pixel values
            self.map_data = np.where(map_array == 0, 0, 
                                    np.where(map_array == 255, 255, 200))
            return self.map_data
        
        except OSError as e:
            raise OSError(f"Failed to load map image: {e}")
    
    def display_window(self):
        '''
        Displays the map and waits for user to click on start and end points.
        Returns: start, end: coordinates of the start and end points
        '''
        if self.map_data is None:
            print("Map data not loaded.")
            return
        
        clicks = []
        
        def on_mouse_click(event):
            x, y = int(event.xdata), int(event.ydata)
            clicks.append((x, y))
            if len(clicks) == 1:
                self.ax.plot(x, y, 'gx') # Green 'x' for starting point
            elif len(clicks) == 2:    
                self.ax.plot(x, y, 'rx')  # Red 'x' for end point
                self.start, self.end = clicks
                self.fig.canvas.mpl_disconnect(cid)
                self.ax.set_title(f"{self.alg} Algorithm Simulation. Press 'q' to exit.")
                
        try:
            # Display the map
            self.fig, self.ax = plt.subplots()
            self.ax.imshow(self.map_data, cmap='gray')
            self.ax.set_title("Click to select origin and destination. Press 'q' to exit.")
            self.ax.set_xticks([])  # Hide x-axis ticks
            self.ax.set_yticks([])

            # Wait for clicks
            cid = self.fig.canvas.mpl_connect('button_press_event', on_mouse_click)
            print("Click on the map to select origin and destination.")

            while self.end is None and not self.break_loop:
                plt.pause(0.1)

                # Check if all windows are closed by the user
                if not plt.fignum_exists(self.fig.number):
                    self.break_loop = True
            
            plt.pause(0.1)

            return self.start, self.end
        
        except Exception as e:
            raise RuntimeError(f"Cannot display the map: {e}")

    def update_map(self, x, y):
        '''
        Updates the map with the new position of the robot.
        '''
        # Plot the new position
        circle = plt.Circle((x, y), radius=self.radius-1, edgecolor='orange', linewidth=1, fill=True)
        self.ax.add_patch(circle)
        self.fig.canvas.draw()

        if self.animation:
            plt.pause(1e-5)  # Animation effect, slows down the simulation

        # Check if all windows are closed by the user
        if not plt.fignum_exists(self.fig.number):
            self.break_loop = True