/*
1. Write a Taxi meter program to calculate the taxi fare for a given mileage.
	a. The 1st 2km is 15,000 VND
	b. The next 250m will cost 2000 VND
	c. If the travel distance is larger than 30km then each extra km will cost only 5000VND
Receive the travel distance in Km and print the amount of money to be paid
______________________________________
| Input: 32.5                        |
| Output: 251500                     |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
	//testing variable, applying it to your algorithm for auto-evaluating
	float distance = atof(argv[1]);
	int result = 0;

	float distanceLeft = 0;
	while (distanceLeft <= distance)
	{
		// printf("distance left: %0.2f -> %d \n", distanceLeft, result);
		// In case of the left distance is negative. Breakpoint here :3
		// distance - distanceLeft is a remainder
		float r = distance - distanceLeft;
		if (distanceLeft == 0)
		{
			// In this case, the first 2km
			distanceLeft += 2;
			result += 15000;
		}
		else
				// Then move to second level
				if (distanceLeft >= 2 && distanceLeft < 30)
		{
			distanceLeft += 0.25;
			result += 2000;
		}
		else if (distanceLeft >= 30 )
		{
			if (r >= 1) {
				distanceLeft += 1;
				result += 5000;
			} else {
				result += 5000 * r;
				distanceLeft += r;
				break;
			}
		}
		// printf("distance - distanceLeft: %0.2f \n", distance - distanceLeft);
	}
	
	

	printf("%d", result);
	return 0;
}
