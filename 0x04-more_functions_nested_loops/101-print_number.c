#include "main.h"
#include <unistd.h>


/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 *
 * Description: Function prints an integer using only the _putchar function.
 *              It handles both positive and negative integers.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
