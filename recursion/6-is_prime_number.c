#include "main.h"
/**
 * is_prime_number_helper - Recursive function to check if n is divisible by i.
 *@n: The number to check if it's prime.
 *@i: The current divisor to check.
 *Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number_helper(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_number_helper(n, i + 1));
}
/**
 * is_prime_number - Checks if a number is prime.
 *@n: The number to check.
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (is_prime_number_helper(n, 2));
}
