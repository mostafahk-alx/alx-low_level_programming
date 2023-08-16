#include "main.h"

/**
 * main - Entry point
 *
 * Description: Printing putchar_
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char text[] = "_putchar\n";
	int length = sizeof(text)-1;

	for(int i = 0; i<length; i++)
	{
		_putchar(text[i]);
	}
	return (0);
}
