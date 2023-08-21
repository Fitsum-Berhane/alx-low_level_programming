#include "main.h"
/**
 * swap_int - This function swaps the value of two integers
 * @a: first integer pointer
 * @b: second integer pointer
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
