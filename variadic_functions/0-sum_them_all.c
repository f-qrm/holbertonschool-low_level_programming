#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Write a function that returns the sum of all its parameters
 * @n: The number of arguments passed to the function
 * Return: The sum of all the passed arguments, or 0 if no arguments are passed
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int resultat = 0;
	unsigned int i;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		resultat += va_arg(args, unsigned int);
	}
	va_end(args);
	return (resultat);
}
