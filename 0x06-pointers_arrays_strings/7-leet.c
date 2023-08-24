/**
 * leet - Encodes a string into 1337.
 * @str: The input string to be encoded.
 *
 * Description: This function encodes the input string according to the
 * 1337 (leet) speak rules specified in the prompt.
 *
 * Return: A pointer to the resulting encoded string.
 */
char *leet(char *str)
{
	char *original_str = str;
	char *leet_chars = "aAeEoOtTlL";
	char *leet_replacements = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet_chars[j] != '\0'; j++)
		{
			if (str[i] == leet_chars[j])
			{
				str[i] = leet_replacements[j];
				break;
			}
		}
	}

	return original_str;
}
