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
	int nr;

	for (nr = 0; nr <= 98; nr++)
	{
		printf("%d", nr);
		if (n != 98)
		{
			printf(", \n");
		}
	}
}
