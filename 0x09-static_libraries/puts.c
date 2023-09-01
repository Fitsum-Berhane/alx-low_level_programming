#include "main.h"
/**
 * _puts - This prints a string followed by a new line
 * @str: this is a string to print
 * Returns: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
