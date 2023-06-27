#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0. (Success).
 */

#define PASSWORD_LENGTH 12

int main(void)
{
	srand(time(0));
	/* This should initialize the random number generator with current time */

	char password[PASSWORD_LENGTH + 1];
	/* Parsing for the NULL terminator */
	int x;

	for (x = 0; x < PASSWORD_LENGTH; x++)
	{
		password[x] = '!' + rand() % ('~' - '!' + 1);
		/* 
		 * Generate a random ASCII character between '!' and
		 * '~' (visible characters)
		 */
	}

	password[PASSWORD_LENGTH] = '\0';
	/* By adding the NULL terminator */

	printf("%s\n", password);
	/* This should print the generated password */

	return (0);
}
