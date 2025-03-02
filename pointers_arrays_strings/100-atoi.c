#include "main.h"
#include <limits.h>
/**
 * _atoi - Convert a string to an integer.
 *@s: The string to be converted.
 *
 *Return: The integer value represented by the string.
 *
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			if (i > (INT_MAX - (*s - '0')) / 10)
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return (INT_MIN);
			}
			i = (i * 10) + (*s - '0');
		}
		else if (i > 0)
			break;
	} while (*s++);
	return (i * sign);
}
