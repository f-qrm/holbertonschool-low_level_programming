#include "main.h"
/**
 *_sqrt_recursion_helper - a helper function that recursively
 * cheks for square root
 *@n: the number to find the squar root of
 *@x: the current numer to check if its square is equal to n
 *Return: The square root of n if it exists, otherwise -1
 */
int _sqrt_recursion_helper(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	if (x * x > n)
	{
		return (-1);
	}
	return (_sqrt_recursion_helper(n, x + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to find the square root of.
 * Return: the natural square root of n if it exists, otherwise -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion_helper(n, 0));
}
