/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to be appended to dest.
 *
 * Description: This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest, and then
 * adds a terminating null byte.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
    char *original_dest = dest;  /* Save the original destination pointer */

    /* Move dest pointer to the end of the string */
    while (*dest != '\0')
    {
        dest++;
    }

    /* Copy characters from src to dest */
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    /* Add a null-terminating byte */
    *dest = '\0';

    return (original_dest);  /* Return the pointer to the concatenated string */
}

