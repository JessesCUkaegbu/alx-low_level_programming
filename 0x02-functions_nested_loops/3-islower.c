#include "main.h"
/**
 * _islower - Write a function that checks for lowercase character
 *@c: the character to be checked
 *
 * Return: 0 otherwise, 1 if c is lower
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	{
		return (0);
	}
}
