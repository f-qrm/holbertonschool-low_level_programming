#include "main.h"
/**
 * _strchr -function that locates a character in a string
 *@s: A pointer to the string where the search will take place.
 *@c: The character to search for in the string.
 *Return: A pointer to the first occurrence of the character in the string,
 *or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return ('\0');
}
