#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: destination memory
 * @src: source memory
 * @n: bytes
 * Return: copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (r = 0; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
