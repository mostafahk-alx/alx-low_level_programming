#include "main.h"

/**
 * main - Entry point
 *
 * Description: Printing _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char text[] = "_putchar\n";
	int length = sizeof(text) - 1;
	int i;

	for (i = 0; i < length; i++)
	{
		_putchar(text[i]);
	}

	return (0);
}

