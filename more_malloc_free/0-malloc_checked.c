#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory
 * @b: size of memory to allocate
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == 0)
	{
		exit(98);
	}
	return (ptr);
}
