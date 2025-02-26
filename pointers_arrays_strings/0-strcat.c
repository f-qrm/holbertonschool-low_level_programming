#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: the destination string to which the source will be appended
 * @src: the source string to be appended to the destination
 *Return: i
 */
char *_strcat(char *dest, char *src)
{
	char *i = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (i);
}
