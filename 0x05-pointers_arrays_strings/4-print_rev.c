#include <unistd.h>
#include "main.h"

/**
 * print_rev - A function that prints a string, in reverse,
 * followed by a new line.
 * @s: The String to be reversed.
 *
 * Return: Always 0. (Success).
 */

void print_rev(char *s)
{
	int length = 0;
	int x;

	while (s[length] != '\0')
	{
		length++;
	}
	for (x = length - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}

	_putchar('\n');
}
