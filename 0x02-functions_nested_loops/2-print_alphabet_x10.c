#include <stdio.h>
#define _putchar putchar
/**
 * print_alphabet_x10 - prints alphabets 10 times
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
