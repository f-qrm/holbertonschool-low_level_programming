#include "main.h"
/**
 * _strncpy - Copies up to n characters from the string src to dest
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of characters to copy
 *
 * Return: A pointer to the destination string (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int ds = 0;

	for (; ds < n && src[ds] != '\0'; ds++)
	{
		dest[ds] = src[ds];
	}
	for (; ds < n; ds++)
	{
		dest[ds] = '\0';
	}
	return (dest);
}
