#include <stdio.h>
#include "main.h"

/**
 * rev_string - A function that reverses a string.
 * followed by a new line.
 * @s: The String to be reversed.
 *
 * Return: Always 0. (Success).
 */
void rev_string(char *s)
{
	int strings = 0;
	int start = 0;
	int end = 0;
	char temp;

	while (s[strings] != '\0')
	{
		strings++;
	}

	end = strings - 1;


	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}

