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

	if (n / 10 != 0)
	{
		print_number(n / 10);
	}

	_putchar((n % 10) + '0');
}
