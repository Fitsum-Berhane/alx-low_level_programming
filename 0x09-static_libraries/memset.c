#include "main.h"
/**
 * _memset - puts value on a memory
 * @s: starting address
 * @n: number of bytes
 * @b: desired value
 * Return: array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
