#include <stdio.h>
#define _putchar putchar
/**
 * print_alphabet - prints the alphabets
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
