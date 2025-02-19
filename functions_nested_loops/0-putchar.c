#include <unistd.h>
#include "main.h"
/**
 *_putchar - writes the character c to stdout
 * @c: The character to print
 *
 *Return: succes 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
/**
 *main - entry point
 *
 *Return: always 0
 */
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}
