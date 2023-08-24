/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: The input string.
 *
 * Description: This function iterates through the input string and converts
 * all lowercase letters to their corresponding uppercase ASCII values.
 *
 * Return: A pointer to the resulting uppercase string.
 */
char *string_toupper(char *str)
{
	char *original_str = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 'a' + 'A';
		}
		str++;
	}

	return original_str;
}
