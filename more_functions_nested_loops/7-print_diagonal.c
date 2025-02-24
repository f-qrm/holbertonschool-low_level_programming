#include "main.h"
/**
 * print_diagonal - prints a diagonal line made of backslashes
 *@n: the number of times the backslash character should be printed
 */
void print_diagonal(int n)
{
	int i;
	int e;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			_putchar('\n');
		}
		for (e = 0; e < i; e++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
