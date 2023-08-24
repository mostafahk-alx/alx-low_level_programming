#include "main.h"

/**
 * print_number - Prints an integer using _putchar.
 * @n: The integer to be printed.
 *
 * Description: This function prints the given integer using only the _putchar
 * function, without using long, arrays, pointers, or hard-coded values.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	int divisor = 1;
	int temp = n;

	while (temp > 9)
	{
		divisor *= 10;
		temp /= 10;
	}

	while (divisor > 0)
	{
		_putchar((n / divisor) % 10 + '0');
		divisor /= 10;
	}
}
