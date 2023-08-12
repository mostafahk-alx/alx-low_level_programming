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

    	/* Print the generated number */
    	printf("The number %d is ", n);

    	/* Check whether the number is positive, zero, or negative */
    	if (n > 0)
    	{
        	printf("positive\n");
   	}
   	 else if (n == 0)
    	{
        	printf("zero\n");
    	}
    	else
    	{
        	printf("negative\n");
    	}

    	return (0);
 17:01:34 up 37 days, 13:11,  0 users,  load average: 0.76, 0.93, 0.88
USER     TTY      FROM             LOGIN@   IDLE   JCPU   PCPU WHAT
