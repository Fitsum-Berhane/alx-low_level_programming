#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: character input
 * @accept: character input
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
