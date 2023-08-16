#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times 
 *
 * Description: This function prints the alphabet from 'a' to 'z',
 * followed by a new line, repeated 10 times using the _putchar function.
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int counter = 0;

	while (counter < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}

		_putchar('\n');
		letter = 'a';
		counter++;
	}
}

