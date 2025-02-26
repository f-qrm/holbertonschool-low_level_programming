#include "main.h"
/**
 *_strcpy - Copies a string from the source to the destination.
 * @dest: Pointer to the destination array where the content will be copied.
 * @src: Pointer to the source string to be copied.
 *Return: value of dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
