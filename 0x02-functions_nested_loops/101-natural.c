
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0. (Success).
 */

int main(void)
{
	int y;
	int sum = 0;

	for (y = 0; y < 1024; y++)
	{
		if (y % 3 == 0 || y % 5 == 0)
		{
			sum += y;
		}
	}


	printf("%d\n", sum);

	return (0);
}
