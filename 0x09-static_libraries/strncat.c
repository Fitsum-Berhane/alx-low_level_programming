#include "main.h"
/**
 * _strncat - concatinates two strings
 * @dest: destination string
 * @src: source string
 * @n: input value
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int j;
	int i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
