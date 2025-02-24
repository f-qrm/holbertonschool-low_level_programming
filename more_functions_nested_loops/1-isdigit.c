#include "main.h"
/**
 * _isdigit - Cheks if c is a digit
 *@c: the caractere to be checked
 *
 *Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
