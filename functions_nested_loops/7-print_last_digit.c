#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *@n: the number from which the last digit will be printed
 *
 *Return: return the last value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n < 0)
	{
		n = -n;
	}
	_putchar ('0' + last_digit);
	return (last_digit);
}
