#include "main.h"
#include <stddef.h>

/**
 * _strlen_recursion - returns the length of a string using recursion
 * @s: string whose length is going to be calculated
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	int str = 0;

	if (*s == '\0')
		return (0);
	str++;
	return (1 + _strlen_recursion(++s));
}
