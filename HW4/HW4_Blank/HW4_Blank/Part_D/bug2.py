"""
EEL 4930/5934: Autonomous Robots
University Of Florida
"""

import numpy as np
import matplotlib.pyplot as plt
import argparse
from utils.simulation import Simulation
from utils.visualization import Visualization

def run_bug2(sim, vis, origin, destination, max_iterations=10000):
    """
    Executes the bug2 algorithm for a robot to navigate from origin to destination.

    Args:
        sim: The simulation environment with navigability, movement, and heading functions.
        vis: The visualization module to update the map.
        origin: Tuple (x, y) representing the starting position.
        destination: Tuple (x, y) representing the target position.
        max_iterations: Maximum number of iterations to prevent infinite loops.

    Raises:
        ValueError: If origin or destination is not set.
        RuntimeError: If the simulation encounters an unexpected error.
    """

    # Validate inputs
    if origin is None or destination is None:
        raise ValueError("Start and end points must be set.")

    
    state_dict = {
        0: 'go to destination',
        1: 'follow wall',
    }  # Two possible states

    STATE = 0  # Start with moving towards the destination

    x, y = origin
    xt, yt = destination
    heading = sim.set_heading(x, y, xt, yt)
    print(f"starting simulation with origin: {origin}, destination: {destination}")

    for _ in range(max_iterations):  # Prevent infinite loops
        if (x, y) == (xt, yt):
            print("Reached the destination!")
            break

        """
            # TODO: your code for Bug2 will go here
            # hint: You will need to implement one more function in the simulator: sim.mline_crossing
        """

        # Update visualization
        vis.update_map(x, y)

        # Check for exit condition
        if vis.break_loop:
            print("Simulation stopped before reaching the destination.")
            break

    else:
        print("Maximum iteration limit reached. Stopping simulation.")

    plt.show()



if __name__ == '__main__':
    # Argument parser
    parser = argparse.ArgumentParser(description="bug2 Algorithm Simulation")
    parser.add_argument('--map_path', type=str, default='data/maze1.png',
                        help="Path to the map file (default: 'data/maze1.png')")
    parser.add_argument('--animation', type=lambda x: x.lower() == 'true', 
                    default=True,
                    help="Enable animation (true or false, default: true)")
    args = parser.parse_args()

    try:
        # Create visualization and simulation objects
        vis = Visualization(args.map_path, args.animation, "Bug2")
        map_data = vis.get_map()
        sim = Simulation(map_data)

        # Get origin and destination points
        origin, destination = vis.display_window()

        # Run the bug2 algorithm
        run_bug2(sim, vis, origin, destination)

    except Exception as e:
        print(f"Error: {e}")
    finally:
        plt.close('all')
