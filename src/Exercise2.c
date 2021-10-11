/*
2. Write a function to calculate the factorial with given integer n,
which satisfies the following:
	if n is odd, factorial = 1 * 3 * 5 * … * n
	if n is even, factorial = 2 * 4 * 6 * … * n
Ex:
______________________________________
| Input: 11                          |
| Output: 10395                      |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned long long exercise2(int n) {
	unsigned long long result;
	result = n % 2 == 0 ? 2 : 1;
	int counter = n % 2 == 0 ? 2 : 1;
	// printf("Counter\tResult\n");
	while (counter <= n)
	{
		// printf("%d\t%llu\n", counter, result);
		result = result * counter;
		counter += 2;
	}
	return result;
}

int main(int argc, char *argv[])
{
	//testing variable, applying it to your algorithm for auto-evaluating
	int n = atoi(argv[1]);
	unsigned long long result = exercise2(n);
	//Your codes here	
	// for (size_t i = 0; i < 22; i++)
	// {
	// 	unsigned long long v = exercise2(i);
	// 	printf("%zu -> %llu\n", i, v);
	// }

	printf("%llu", result);
	return 0;
}
