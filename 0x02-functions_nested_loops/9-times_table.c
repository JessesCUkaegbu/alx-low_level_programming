#include "main.h"
/**
 * times_table - Prints the 9 times tabl
 *
 * Return: Always 0. (Success).
 */

void times_table(void)
{
	int x, y, product;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			product = x * y;

			if (product > 9)
				_putchar(product / 10 + '0');
			else if (y != 0)
				_putchar(' ');

			_putchar(product % 10 + '0');

			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
