/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 *
 * Description: This function iterates through the input string and capitalizes
 * the first letter of each word. Words are separated by specific separators.
 *
 * Return: A pointer to the resulting string with capitalized words.
 */
char *cap_string(char *str)
{
	char *original_str = str;
	int capitalize_next = 1;  /* Flag to indicate if next char should be capitalized */

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z' && capitalize_next)
		{
			*str = *str - 'a' + 'A';  /* Convert lowercase to uppercase */
			capitalize_next = 0;  /* Capitalized the current character */
		}
		else if (*str == ' ' || *str == '\t' || *str == '\n' ||
		         *str == ',' || *str == ';' || *str == '.' ||
		         *str == '!' || *str == '?' || *str == '"' ||
		         *str == '(' || *str == ')' || *str == '{' || *str == '}')
		{
			capitalize_next = 1;  /* Next character should be capitalized */
		}
		else
		{
			capitalize_next = 0;  /* Keep the character as it is */
		}
		str++;
	}

	return original_str;  /* Return the modified string */
}
