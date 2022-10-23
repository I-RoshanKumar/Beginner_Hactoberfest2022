# Python3 program to calculate
# distance between two points

import math

# Function to calculate distance
def distance(x1 , y1 , x2 , y2):

	# Calculating distance
	return math.sqrt(math.pow(x2 - x1, 2) +
				math.pow(y2 - y1, 2) * 1.0)

# Drivers Code
print("%.6f"%distance(3, 4, 4, 3))

# This code is contributed by "Sharad_Bhardwaj".
