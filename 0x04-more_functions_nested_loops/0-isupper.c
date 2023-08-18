int _isupper(char c)
{
	if ( char c >= 'a' && char c <= 'z')
		return 0;
	else if ( char c>= 'A' && char c <= 'Z' )
		return 1;
	return (0);
}
