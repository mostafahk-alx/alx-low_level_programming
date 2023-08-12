#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all single digit numbers of base 10
 *              starting from 0, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int digit = 0;

    while (digit <= 9)
    {
        putchar('0' + digit); /* Print the current digit */
        digit++;
    }

    putchar('\n'); /* Print a new line after all digits */

    return (0); /* Success */
}
