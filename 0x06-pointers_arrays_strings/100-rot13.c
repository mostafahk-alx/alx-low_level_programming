/**
 * rot13 - Encodes a string using the ROT13 cipher.
 * @str: The input string to be encoded.
 *
 * Description: This function encodes the input string using the ROT13 cipher,
 * which shifts each letter by 13 positions in the alphabet.
 *
 * Return: A pointer to the resulting encoded string.
 */
char *rot13(char *str)
{
	char *original_str = str;
	char *alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13_alphabet = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			if (str[i] == alphabet[j])
			{
				str[i] = rot13_alphabet[j];
				break;
			}
		}
	}

	return original_str;
}
