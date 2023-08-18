/**
 * _isupper - Checks if a char is uppercase 
 * @c: The char to be checked
 *
 * Return: 1 if @c is upper, 0 if @c is lower, -1 if @c isn't a char
 */

int _isupper(int c)
{
	if(65>= c && c <= 90)
	{
		return (1);
	}
	if(c >= 97 && c <=122)
	{
		return (0);
	}
	return (-1);
}
