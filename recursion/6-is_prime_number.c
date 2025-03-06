#include "main.h"

/**
 * helper - Checks if a number is prime recursively
 * @n: The number to check
 * @i: The current divisor
 *
 * Return: 1 if prime, 0 otherwise
 */
int helper(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (helper(n, i + 1));
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (helper(n, 2));
}
