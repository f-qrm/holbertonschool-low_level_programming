#include "variadic_functions.h"
#include <stdarg.h>
#include <stdarg.h>
#include <stdio.h>
/**
 *print_all - A function that prints anything (char, integer, float, string)
 *@format: A string that specifies the types of the arguments.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	int printed = 0;

	va_start(args, format);
	while (format && format[i])
	{
		if (printed && (format[i] == 'c' || format[i] == 'i'
			|| format[i] == 'f' || format[i] == 's'))
			{
				printf(", ");
			}
			switch (format[i])
			{
				case 'c':
				printf("%c", va_arg(args, int));
				printed = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				printed = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				printed = 1;
				break;
			case 's':
				str = va_arg(args, char*);
				printf("%s", str ? str : "(nil)");
				printed = 1;
				break;
			default:
				break;
			}
			i++;
	}
	printf("\n");
	va_end(args);
}
