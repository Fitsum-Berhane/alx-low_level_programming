#include "main.h"
/**
 * factorial - returns the factorial of a number
 * @n: number whose factorial we want
 * Return: factorial
 */

int factorial(int n)
{
	unsigned long int fact;

	if (n == 1 || n == 0)
		return (1);
	fact = n * factorial(n - 1);
	return (fact);
}
