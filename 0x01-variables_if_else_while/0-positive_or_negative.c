#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * This program generates a random number and prints whether
 * it is positive, zero, or negative.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	/* Seed the random number generator with the current time */
	srand(time(0));
	/* Generate a random number between -RAND_MAX/2 and RAND_MAX/2 */
	n = rand() - RAND_MAX / 2;
	/* Check whether the number is positive, zero, or negative */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("0 is zero\n");
	}
	else
	{
		printf("%d is negative\n",n);
	}	
	return (0);
}
