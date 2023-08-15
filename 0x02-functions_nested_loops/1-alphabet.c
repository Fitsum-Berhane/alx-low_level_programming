#include "main.h"
/**
* main - check the code
*
* Return: Always 0.
*/

void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - prints alphabets
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
}
