#include "main.h"
/**
 * print_array - Prints n elements of an array of integers, followed by a new line.
 * @a: Pointer to the integer array.
 * @n: Number of elements to print.
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i > 0)
		{
			if (i < n - 1)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
		putchar(a[i] + '0');
	}
}
