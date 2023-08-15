#include <stdio.h>

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
		putchar(text[i]);
	}
	return (0);
}
