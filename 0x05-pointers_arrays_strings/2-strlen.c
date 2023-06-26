
#include <unistd.h>
#include "main.h"

/**
 * _strlen - A function that returns the length of a string.
 * @s: the length of string to measure.
 *
 * Return: Always 0. (Success).
 */

int _strlen(char *s)
{
	int the_length = 0;

	while (*s != '\0')
	{
		the_length++;
		s++;
	}

	return (the_length);
}
