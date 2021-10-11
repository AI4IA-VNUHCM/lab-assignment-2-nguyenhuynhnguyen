/*
3. Write a function to represent a given integer as product of prime numbers
Ex:
______________________________________
| Input: 24                          |
| Output: 2 * 2 * 2 * 3              |
|____________________________________|
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int primes[9999];
int sieve(int n)
{
	for (size_t i = 0; i < n; i++)
	{
		primes[i] = 1;
	}

	//
	primes[0] = 0;
	primes[1] = 0;
	primes[2] = 1;
	for (size_t i = 2; i * i <= n; i++)
	{
		if (primes[i] == 1)
		{
			for (size_t j = i * i; j <= n; j += i)
			{
				primes[j] = 0;
			}
		}
	}
	return primes[n];
}

int main(int argc, char *argv[])
{
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);

	//Your codes here
	// Init sieve of Eratosthenes
	int isPrime = sieve(testcase);
	// for (size_t i = 0; i < testcase; i++)
	// {
	// 	printf("%zu -> %d\n", i, primes[i]);
	// }

	// printf("%s", (isPrime == 0 ? "False" : "True"));

	int mod = testcase;
	while (mod > 1)
	{
		// printf("outer loop %d\n", mod);

		int i = 1;
		while (i <= mod+1)
		{
			// printf("outer loop %d; i: %d \n", mod, i);
			// printf("prime %s\n", (sieve(i) == 1 ? "true" : "false"));
			if (sieve(i) == 1 && (mod % i) == 0)
			{
				mod /= i;
				printf(" %d%s", i, (mod == 1 ? "" : " *"));
				// printf("mod now is %d\n", mod);
				break;
			}
			else
			{
				i++;
			}
		}
	}

	return 0;
}
