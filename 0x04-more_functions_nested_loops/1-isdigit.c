/*
 * _isdigit - Check if char is a digit
 *
 * @c: Character
 *
 * Return: 1 if @c is a digit, 0 if @c is not a digit
 */

int _isdigit(int c){
	if(c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
