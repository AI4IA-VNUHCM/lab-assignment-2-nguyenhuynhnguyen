/*
4.	Receive an array of n integers, n is even. 
Sort the first half in increasing order and second half decreasing order
Ex:
 ____________________________________
| Input:  8 7 9 2 1 5 2 0            |
| Output: 2 7 8 9 5 2 1 0            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int n = argc;
	int test_array[n],i;
	for(i=0; i<n;i++){
		test_array[i] = atoi(argv[i+1]);
	}
	//Your codes here

	// swap(&test_array[1], &test_array[0]);
	// Lets make a bubble sort :D 
	for (size_t i = 0; i < n/2; i++)
	{
		// printf("%d ", test_array[i]);
		for (size_t j = 0; j < i; j++)
		{
			if (test_array[i] < test_array[j]){
				swap(&test_array[i], &test_array[j]);
			}
		}
		
	}

	for (size_t i = (n/2); i < n; i++)
	{
		// printf("%d ", test_array[i]);
		for (size_t j = (n/2); j < n; j++)
		{
			if (test_array[i] > test_array[j]){
				swap(&test_array[i], &test_array[j]);
			}
		}
		
	}
	
	for (size_t i = 0; i < n; i++)
	{
		printf("%d ", test_array[i]);
	}
	
	return 0;
}
