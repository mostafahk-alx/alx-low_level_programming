int _isupper(int c){
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
