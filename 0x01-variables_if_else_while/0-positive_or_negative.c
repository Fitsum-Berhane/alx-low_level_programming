#include <stdlib.h>
#include <time.h>
/**
  *main - Checks if a random number is >, < or =0.
  *
  *return: Always return 0
  */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n");
	}
	else if (n < 0)
	{
		printf("%d is negative\n");
	}
	else if (n == 0)
	{
		printf("%d is zero\n");
	}
	return (0);
}
