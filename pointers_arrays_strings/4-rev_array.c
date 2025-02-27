#include "main.h"
/**
 * reverse_array - Write a function that reverses the content
 * of an array of integers
 *@a: a pointer to the array of integers.
 *@n: The numbr of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int x = n -1;
	int temp;

	while (i < x)
	{
		temp = a[i];
		a[i] = a[x];
		a[x] = temp;
		i++;
		x--;
	}
}
