#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: the string to check.
 * @accept: the string containing the characters to match in `s`
 * Return: the number of bytes in the initial segment of `s` which consist
 *only of bytes from `accept`.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *a = accept;
	int found = 0;

	while (*s != '\0')
	{
		a = accept;
		found = 0;
		while (*a != '\0')
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
			a++;
		}
		if (!found)
		{
			break;
		}
		count++;
		s++;
	}
	return (count);
}
