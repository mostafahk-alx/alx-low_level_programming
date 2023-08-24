/**
 * _strncpy - Copies a string.
 * @dest: The destination buffer.
 * @src: The source string to be copied.
 * @n: The maximum number of characters to be copied from src.
 *
 * Description: This function copies up to n characters from the src string
 * to the dest buffer. If the length of src is less than n, the remaining
 * bytes in dest are filled with null bytes. If n is reached before the end
 * of src, dest will not be null-terminated.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }

    return dest;
}

