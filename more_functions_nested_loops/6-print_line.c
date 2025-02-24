#include "main.h"
/**
 * print_line - prints a line of underscores or a newline character
 * @n: the number of times to print the underscore character
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
