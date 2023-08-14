#include <stdio.h>
/**
 * main - This prints the nubmers 0 up to 9
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}

