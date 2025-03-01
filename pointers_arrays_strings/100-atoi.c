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
	int num = 0;

	while (s[i] == ' ' || s[i] == '\t')
		i++;
	while (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign = -sign;
		i++;
	}
	while (s[i] < '0' || s[i] > '9')
		i++;
	while (s[i] >= '0' && s[i] <= '9')
	{
		num = num * 10 + (s[i] - '0');
		i++;
	}
	return (sign * num);
}
