#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabetic character
 * @c: The character to check
 *
 * Return: 1 if c is a letter (lowercase or uppercase), 0 otherwise
 */
int _isalpha(int c)
{
	/* Check if c is a letter (lowercase or uppercase) */
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1); /* c is an alphabetic character */
	}
	else
	{
		return (0); /* c is not an alphabetic character */
	}
}
