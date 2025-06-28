#include "main.h"

/**
 * is_prime_helper - checks if n is divisible by divisor
 * @n: number to check
 * @divisor: current divisor to test
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_helper(int n, int divisor)
{
	if (n < 2)
		return (0);
	if (divisor * divisor > n)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (is_prime_helper(n, divisor + 1));
}

/**
 * is_prime_number - returns 1 if n is prime, otherwise 0
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
