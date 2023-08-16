#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The number to check
 *
 * Return: 1 if n > 0, 0 if n=0, -1 if n < 0
 */
int print_sign(int n)
{
	/* Check the sign of n and print the corresponding sign */
	if (n > 0)
	{
		_putchar('+');
		return (1); /* Positive */
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0); /* Zero */
	}
	else
	{
		_putchar('-');
		return (-1); /* Negative */
	}
}
