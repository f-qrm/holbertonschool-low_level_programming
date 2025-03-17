#include "function_pointers.h"
/**
 * int_index - function that searches for an integer in an array
 *@array: the array to search through
 *@size: the size of the array
 *@cmp: pointer to the function that will be used to compare values
 *Return: the index of the first element for which cmp does not return 0, or -1
 * if no such element is found or if there are errors
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
