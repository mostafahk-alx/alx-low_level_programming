#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number and returns its value
 * @n: The number to extract the last digit from
 *
 * Return: The value of the last digit
 *
 * Description: This function calculates and prints the last digit of the given number.
 *              It then returns the value of the last digit.
 */
int print_last_digit(int n)
{
    int last_digit;

    /* Calculate the absolute value of n */
    if (n < 0)
    {
        n = -n;
    }

    /* Extract the last digit */
    last_digit = n % 10;

    /* Print the last digit */
    _putchar(last_digit + '0');

    return (last_digit);
}
