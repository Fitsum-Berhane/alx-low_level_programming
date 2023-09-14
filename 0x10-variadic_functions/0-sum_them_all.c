#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sums all the given numbers
 * @n: number of arguments
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int sum = 0, i = 0;

	va_start(list, n);
	for (i = 0; i < n; i++)
		sum += va_arg(list, unsigned int);
	va_end(list);

	return (sum);
}
