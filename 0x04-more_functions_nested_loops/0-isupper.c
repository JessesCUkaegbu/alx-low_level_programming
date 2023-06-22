
#include <stdio.h>
#include "main.h"

/**
 * _isupper - A function that checks for uppercase character.
 * @c: Case letter to check
 *
 * Return: Returns 0 otherwise, 1 if c is uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
