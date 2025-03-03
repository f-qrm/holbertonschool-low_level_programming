#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 *@s: Pointer to the memory area to be filled
 *@b: the constant byte to fill the memory filled
 *@n: the number of bytes to be filled
 *
 * Return: a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
return (s);
}
