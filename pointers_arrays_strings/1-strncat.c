#include "main.h"
/**
 * _strncat - Concatenate two strings, using at most n bytes from src.
 * @dest: The destination string to which characters will be appended.
 * @src: The source string from which characters will be taken.
 * @n: The maximum number of characters to copy from src.
 *Return: A pointer to the resulting string dest, which contains the
 *concatenated strings
 */
char *_strncat(char *dest, char *src, int n)
{
	char *orgdest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (n > 0)
	{
		*dest = *src;
		n--;
		dest++;
		src++;
	}
	*dest = '\0';
	return (orgdest);
}
