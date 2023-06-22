
#include "main.h"


/**
 * print_line - A function that draws a straight line in the terminal.
 * @n: the number of times the character _ should be printed.
 *
 * Return: If n is 0 or less, the function should only print '\n'
 */

void print_line(int n)
{

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
