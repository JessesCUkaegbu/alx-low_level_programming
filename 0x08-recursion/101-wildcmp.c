#include "main.h"

/**
 * wildcmp - Compares two strings and returns (1) if they can be
 * considered identical,
 *            otherwise returns (00. The second string can
 *            contain the special character *.
 *            The special char * can replace any string
 *            (including an empty string).
 *
 * @s1: The first string.
 * @s2: The second string that can contain * as a special character.
 *
 * Return: 1 if the strings are considered identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
			/* If * is the last character, it can match any remaining s1. */
			return (1);
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
			/* Match current * with s1 character. */
			return (1);
		return (wildcmp(s1, s2 + 1));
		/* Move to the next character after *. */
	}
	if (*s1 == '\0')
		/* If s1 is empty, s2 should also be empty. */
		return (*s2 == '\0');
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	/* Move to the next character in both strings. */
	return (0); /* Characters do not match. */
}
