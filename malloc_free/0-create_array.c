#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Function to create an array of a specified size
 * and fill it with a specified character
 * @size: The size of the array to be created
 * @c: The character with which the array will be filled
 *Return: Pointer to the created array or NULL if the size
 * is 0 or memory allocation fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
