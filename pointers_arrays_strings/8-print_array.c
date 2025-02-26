#include <stdio.h>
#include "main.h"
/**
 * print_array - prints the array
 *@a: pointer to the first element of the array
 *@n: number of elements in the array
 *
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
