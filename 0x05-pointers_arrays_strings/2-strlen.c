/**
 * _strlen - function that returns the length of a string
 *
 * @s: string val
 *
 * Return: length of string
 *
 */

int _strlen(char *s)
{
	int length = 0;
	int i;

	for(i = 0; s[i] != '\0' ; i++)
	{
		length++;
	}	
	return (length);
}
