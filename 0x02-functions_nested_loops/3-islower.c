

/**
 * _islower - Checks if a character is lowercase
 * @c: The character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 *
 * Description: This function checks if the given character is lowercase.
 * It returns 1 if the character is lowercase and 0 if it's not.
 */
int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

