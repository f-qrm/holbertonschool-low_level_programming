#include "main.h"
/**
 * _puts - This function put the string.
 * @str: The string.
 */
void _puts(char *str)
{
	int string = 0;

	while (str[string] != '\0')
	{
		string++;
		_putchar(*str);
	}
	_putchar('\n');
}
