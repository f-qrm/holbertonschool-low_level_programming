#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 *@nmemb: The number of elements in the array.
 *@size: The size of each element in bytes.
 *Return: A pointer to the allocated memory, or NULL if an error occurs.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size, i;
	char *resultat;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	total_size = nmemb * size;
	resultat = malloc(total_size);
	if (resultat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < total_size; i++)
	{
		resultat[i] = 0;
	}
	return (resultat);
}
