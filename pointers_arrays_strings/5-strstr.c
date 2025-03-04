#include "main.h"
/**
 * _strstr - Locates a substring (needle) within a string (haystack).
 *@haystack: The string in which the search will be performed.
 *@needle: The substring that is being searched for in the haystack.
 *Return: A pointer to the beginning of the located substring,
 *or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	while (*haystack)
	{
		h = haystack;
		n = needle;
		if (*n == '\0')
		{
			return (haystack);
		}
		while (*h && *n && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
