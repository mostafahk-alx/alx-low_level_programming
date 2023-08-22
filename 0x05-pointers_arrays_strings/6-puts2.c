#include "main.h"

/**
 * puts2 - prints every other character
 *
 * @str: string var
 *
 */

void puts2(char *str)
{
	for (int i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
