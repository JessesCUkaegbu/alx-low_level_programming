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
