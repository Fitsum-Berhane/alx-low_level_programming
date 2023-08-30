#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number for which to find the square root
 *
 * Return: natural square root of n, or -1
 */
int sqrt_helper(int n, int guess);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_helper(n, 0));
}

/**
 * sqrt_helper - recursive helper function to calculate the square root
 * @n: number for which to find the square root
 * @guess: current guess for the square root
 *
 * Return: natural square root of n, or -1
 */
int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (sqrt_helper(n, guess +1));
}
