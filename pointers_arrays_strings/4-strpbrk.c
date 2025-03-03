#include "main.h"
/**
 * _strpbrk - Searches for the first occurrence of any character
 *from the string `accept` in the string `s`.
 *@s: The main string to search through.
 *@accept: The string containing characters to search for in `s`.
 *Return: A pointer to the first occurrence found in `s`, or
 *0 if no character is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{
		a = accept;
		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (0);
}
