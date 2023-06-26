#include <unistd.h>
#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers.
 * @a: first integer to be swapped.
 * @b: second integer to be swapped.
 *
 * Return: Always 0. (Success).
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
