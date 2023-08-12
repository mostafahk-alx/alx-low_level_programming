#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all numbers of base 16 in lowercase,
 *              followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num); /* Print digits 0-9 */
	}
	for (num = 0; num < 6; num++)
	{
		putchar('a' + num); /* Print characters 'a'-'f' */
	}

	putchar('\n');

	return (0); /* Success */
}

