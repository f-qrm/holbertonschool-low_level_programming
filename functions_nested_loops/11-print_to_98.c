#include "main.h"
#include <stdio.h>
/**
 ** print_to_98 - Print all numbers from a given number to 98.
 * @n: The starting number.
 *
 *Return: always 0
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
	for (; n < 98; n++)
	{
		printf("%d, ", n);
	}
	printf("98\n");
	}
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
		printf("98\n");
	}
}
