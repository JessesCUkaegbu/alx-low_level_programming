
#include "main.h"

/**
 * print_times_table - A function that prints the n times table.
 * @n: the time table to print.
 *
 * Return: Always 0. (Success).
 */

void print_times_table(int n)
{
	int a, b;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			int product = a * b;

			if (b == 0)
			{
				_putchar(0);
			}

			else
			{
				_putchar(',');
				_putchar(' ');
			}

			if (product < 10)
			{
				_putchar(' ');
			}

			if (product < 100)
			{
				_putchar(' ');
			}

			if (product >= 100)
			{
				_putchar((product / 100) + '0');
				_putchar(((product / 10) % 10) + '0');
			}

			else if (product >= 10)
			{
				_putchar((product / 10) + '0');
			}


			_putchar((product % 10) + '0');
		}
	}

	_putchar('\n');
}
