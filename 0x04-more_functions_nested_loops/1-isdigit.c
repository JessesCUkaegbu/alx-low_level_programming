#include <stdio.h>
#include "main.h"

/**
 * _isdigit - A function that checks for a digit (0 through 9).
 * @c: Number to check
 *
 * Return: Returns 0 otherwise, 1 if c is a digit.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
