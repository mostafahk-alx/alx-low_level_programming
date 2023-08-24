/**
 * _strcmp - Compares two strings.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * Description: This function compares strings s1 and s2. It returns an
 * integer greater than, equal to, or less than 0, according to whether
 * s1 is greater than, equal to, or less than s2 (similar to strcmp).
 *
 * Return: An integer greater than, equal to, or less than 0.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (int)(*s1 - *s2);
}
