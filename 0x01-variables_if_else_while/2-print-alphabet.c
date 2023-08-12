#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the lowercase alphabet
 *              using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    /* Start with the lowercase 'a' */
    char letter = 'a';

    /* Print the alphabet using a loop */
    while (letter <= 'z') {
        putchar(letter);
        letter++; /* Move to the next letter */
    }

    /* Print a new line after the alphabet */
    putchar('\n');

    return 0; /* Success */
}
