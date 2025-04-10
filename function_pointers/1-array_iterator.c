#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function that execute a function given
 * as a parameter on each element of an array
 * @array: the array to iterate over
 *@size: the size of the array
 *@action: pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
