#include "main.h"
/**
 * print_sign - Write a function that prints the sign of a number.
 * @n: number of signs to print
 *
 * Return: Always 0. (Success).
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}


	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
