#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
/* Entry point of the program */
{
	printf("%s\n", argv[0]);
/* Prints the value of 'argv[0] */
	return (0);
}
