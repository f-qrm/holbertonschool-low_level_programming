#include "main.h"
/**
 * _pow_recursion - Write a function that returns
 * the value of x raised to the power of y
 * @x: the base number to be raised to the power.
 * @y: the exponent to wich the base x is raised.
 *Return: 01 or 1 or x or the result of x x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
