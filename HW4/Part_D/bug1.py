"""
EEL 4930/5934: Autonomous Robots
University Of Florida
"""

import numpy as np
import matplotlib.pyplot as plt
import argparse
from utils.simulation import Simulation
from utils.visualization import Visualization

def run_bug1(sim, vis, origin, destination, max_iterations=10000):
    """
    Executes the Bug1 algorithm for a robot to navigate from origin to destination.

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
        1: 'circumnavigate',
        2: 'go to closest point',
    }  # Three possible states

    STATE = 0  # Start with moving towards the destination
    min_points = 100 # Minimum number of points to check for revisiting the hit point
    d_threshold = 5  # Distance threshold to check if the hit point is revisited

    x, y = origin
    xt, yt = destination
    heading = sim.set_heading(x, y, xt, yt)
    print(f"starting simulation with origin: {origin}, destination: {destination}")

    for _ in range(max_iterations):  # Prevent infinite loops
        if (x, y) == (xt, yt):
            print("Reached the destination!")
            break

        if STATE == 0:  # Go to destination
            heading = sim.set_heading(x, y, xt, yt)
            
            if sim.navigability(x, y, heading):
                x_new, y_new = sim.move_forward(x, y, heading)
                x, y = x_new, y_new
            else:
                hit_point = (x, y)  # Store the hit point
                circumnavigation_path = [hit_point] # Store circumnavigation points
                circumnavigation_headings = [heading] # Store circumnavigation headings
                min_dist_to_goal = sim.distance(x, y, xt, yt)   # Distance to goal
                closest_point = hit_point
                STATE = 1
                print(f"STATE switched to: {state_dict[STATE]}")
                # print(f"hit point: {hit_point}")

        elif STATE == 1:  # Circumnavigate
            # Move along the obstacle boundary
            (x, y), heading = sim.follow_boundary(x, y, heading)
            circumnavigation_path.append((x, y))
            circumnavigation_headings.append(heading)

            # Check if this point is closer to the goal
            dist_to_goal = sim.distance(x, y, xt, yt)
            if dist_to_goal < min_dist_to_goal:
                min_dist_to_goal = dist_to_goal
                closest_point = (x, y)
            
            # Check if the hit point is revisited
            if len(circumnavigation_path) > min_points and sim.distance(x, y, hit_point[0], hit_point[1]) < d_threshold:
                STATE = 2
                print(f"STATE switched to: {state_dict[STATE]}")

        elif STATE == 2:  # Leave obstacle and go to closest point
            x, y = circumnavigation_path.pop()
            heading = circumnavigation_headings.pop()
            
            # Check if closest point is reached
            if (x, y) == closest_point:
                STATE = 0
                print(f"STATE switched to: {state_dict[STATE]}")

        # print(f"New Position: ({x}, {y}), Heading: {np.rad2deg(heading)} degrees")

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
    parser = argparse.ArgumentParser(description="Bug1 Algorithm Simulation")
    parser.add_argument('--map_path', type=str, default='data/maze1.png',
                        help="Path to the map file (default: 'data/maze1.png')")
    parser.add_argument('--animation', type=lambda x: x.lower() == 'true', 
                    default=True,
                    help="Enable animation (true or false, default: true)")
    args = parser.parse_args()

    try:
        # Create visualization and simulation objects
        vis = Visualization(args.map_path, args.animation, "Bug1")
        map_data = vis.get_map()
        sim = Simulation(map_data)

        # Get origin and destination points
        origin, destination = vis.display_window()

        # Run the Bug1 algorithm
        run_bug1(sim, vis, origin, destination)

    except Exception as e:
        print(f"Error: {e}")
    finally:
        plt.close('all')


    x, y = origin
    xt, yt = destination
    heading = sim.set_heading(x, y, xt, yt)
    print(f"starting simulation with origin: {origin}, destination: {destination}")

    for _ in range(max_iterations):  # Prevent infinite loops
        if (x, y) == (xt, yt):
            print("Reached the destination!")
            break

        if STATE == 0:  # Go to destination
            heading = sim.set_heading(x, y, xt, yt)
            
            if sim.navigability(x, y, heading):
                x_new, y_new = sim.move_forward(x, y, heading)
                x, y = x_new, y_new
            else:
                hit_point = (x, y)  # Store the hit point
                circumnavigation_path = [hit_point] # Store circumnavigation points
                circumnavigation_headings = [heading] # Store circumnavigation headings
                min_dist_to_goal = sim.distance(x, y, xt, yt)   # Distance to goal
                closest_point = hit_point
                STATE = 1
                print(f"STATE switched to: {state_dict[STATE]}")
                # print(f"hit point: {hit_point}")

        elif STATE == 1:  # Circumnavigate
            # Move along the obstacle boundary
            (x, y), heading = sim.follow_boundary(x, y, heading)
            circumnavigation_path.append((x, y))
            circumnavigation_headings.append(heading)

            # Check if this point is closer to the goal
            dist_to_goal = sim.distance(x, y, xt, yt)
            if dist_to_goal < min_dist_to_goal:
                min_dist_to_goal = dist_to_goal
                closest_point = (x, y)
            
            # Check if the hit point is revisited
            if len(circumnavigation_path) > min_points and sim.distance(x, y, hit_point[0], hit_point[1]) < d_threshold:
                STATE = 2
                print(f"STATE switched to: {state_dict[STATE]}")

        elif STATE == 2:  # Leave obstacle and go to closest point
            x, y = circumnavigation_path.pop()
            heading = circumnavigation_headings.pop()
            
            # Check if closest point is reached
            if (x, y) == closest_point:
                STATE = 0
                print(f"STATE switched to: {state_dict[STATE]}")

        # print(f"New Position: ({x}, {y}), Heading: {np.rad2deg(heading)} degrees")

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
    parser = argparse.ArgumentParser(description="Bug1 Algorithm Simulation")
    parser.add_argument('--map_path', type=str, default='data/maze1.png',
                        help="Path to the map file (default: 'data/maze1.png')")
    parser.add_argument('--animation', type=lambda x: x.lower() == 'true', 
                    default=True,
                    help="Enable animation (true or false, default: true)")
    args = parser.parse_args()

    try:
        # Create visualization and simulation objects
        vis = Visualization(args.map_path, args.animation, "Bug1")
        map_data = vis.get_map()
        sim = Simulation(map_data)

        # Get origin and destination points
        origin, destination = vis.display_window()

        # Run the Bug1 algorithm
        run_bug1(sim, vis, origin, destination)

    except Exception as e:
        print(f"Error: {e}")
    finally:
        plt.close('all')
