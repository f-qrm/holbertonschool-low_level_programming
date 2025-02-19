#include "main.h"
/**
 * print_sign - write a function that prints the sign of a number
 *
 * @n: The number to check
 *Return: return 1 reutrn 0 return -1
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
