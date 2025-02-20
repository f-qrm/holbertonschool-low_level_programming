#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *@n: the number from which the last digit will be printed
 *
 *Return: return the last value of the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	n = n % 10;
	_putchar ('0' + n);
	return (n);
}
