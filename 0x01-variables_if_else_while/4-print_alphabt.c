#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the lowercase alphabet,
 *              excluding the letters 'q' and 'e', followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    /* Start with the lowercase 'a' */
    char letter = 'a';

    /* Print the alphabet while excluding 'q' and 'e' */
    while (letter <= 'z')
    {
        if (letter != 'e' && letter != 'q')
        {
            putchar(letter);
        }
        letter++;
    }

    /* Print a new line after the alphabet */
    putchar('\n');

    return (0); /* Success */
}
