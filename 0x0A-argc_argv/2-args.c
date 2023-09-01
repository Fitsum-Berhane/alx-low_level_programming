#include <stdio.h>
/**
 * main - prints all arguments in a new line
 * @argc: argument count
 * @argv: argument value
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
