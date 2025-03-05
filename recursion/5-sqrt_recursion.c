#include "main.h"
/**
 *_sqrt_recursion - the function that returns the natural square root of number
 *@n: the number to find the squar root of
 *@x: the current numer to check.
 *Return: The square root of n if it exists, otherwise -1
 */
int _sqrt_recursion(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	if (x * x > n)
	{
		return (-1);
	}
	return (_sqrt_recursion(n, x + 1));
}
