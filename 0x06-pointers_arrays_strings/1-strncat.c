/**
 * _strncat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to be appended to dest.
 * @n: The maximum number of bytes to be appended from src.
 *
 * Description: This function appends up to n bytes from the src string to
 * the dest string, overwriting the terminating null byte (\0) at the end
 * of dest, and then adds a terminating null byte.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	/* Save the original destination pointer */
	char *original_dest = dest;

	/* Move dest pointer to the end of the string */
	while (*dest != '\0')
	{
		dest++;
	}

	/* Copy up to n characters from src to dest */
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	/* Add a null-terminating byte */
	*dest = '\0';

	return original_dest; /* Return the pointer to the concatenated string */
}
