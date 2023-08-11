#include<stdio.h>
/**
  *main - Entry point
  *
  *Return: Always 0 (success)
  */

int main(void)
{
	char c;
	int i;
	long l;
	float f;

	printf("Size of a char: %zu byte(s)\n", sizeof(c));
	printf("Size of an int: %zu byte(s)\n", sizeof(i));
	printf("Size of a long int: %zu byte(s)\n", sizeof(l));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(l));
	printf("Size of a float: %zu byte(s)\n", sizeof(f));
}
