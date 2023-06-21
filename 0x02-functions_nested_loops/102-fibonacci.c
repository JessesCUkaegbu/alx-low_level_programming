#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0. (Success).
 */

int main(void)
{
	int count;
	long int fibonacci_1 = 1;

	long int fibonacci_2 = 2;

	printf("%ld, %ld", fibonacci_1, fibonacci_2);

	for (count = 3; count <= 50; count++)
	{
		long int next = fibonacci_1 + fibonacci_2;

		printf(", %ld", next);

		fibonacci_1 = fibonacci_2;
		fibonacci_1 = next;

	}

	printf("\n");
}
