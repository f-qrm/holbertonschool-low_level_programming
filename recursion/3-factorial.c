#include "main.h"
/**
 *factorial - fonction that returns the factorial of a given number
 * @n: the given number.
 * Return: -1 or 1 or factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
