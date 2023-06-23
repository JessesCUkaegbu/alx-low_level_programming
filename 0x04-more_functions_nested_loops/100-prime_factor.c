#include <stdio.h>

/**
 * largest_prime_factor - Calculates the largest prime factor of a given number
 *
 * @number: The number to find the largest prime factor of.
 *
 * Return: The largest prime factor of the given number.
 */
long largest_prime_factor(long number)
{
	long factor = 2;

	while (factor * factor <= number)
	{
		if (number % factor == 0)
		{
			number /= factor;
		}
		else
		{
			factor++;
		}
	}

	return (number);
}
/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	long number = 612852475143;
	long largest_factor = largest_prime_factor(number);

	printf("%ld\n", largest_factor);

	return (0);
}
