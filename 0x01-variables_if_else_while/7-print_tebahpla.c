#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the lowercase alphabet in reverse,
 *              followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'z'; // Start with the lowercase 'z'

	// Print the alphabet in reverse using a loop
	while (letter >= 'a')
	{
		putchar(letter);
		letter--; // Move to the previous letter
	}

	// Print a new line after the alphabet
	putchar('\n');

	return (0); // Success
}

