#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: the pointer area to copie
 * @src:the pointer area to be copied
 * @n: bytes to copie
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		*src = *dest;
		src++;
		dest++;
		i++;
	}
	return (src);
}
