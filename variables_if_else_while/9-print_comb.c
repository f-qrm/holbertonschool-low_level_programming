#include <stdio.h>
/**
 *main - entry point
 *
 *Return: always 0
 */
int main(void)
{
	int numbers = 48;

	while (numbers <= 57)
	{
		putchar(numbers);
	}
	if (numbers != 57)
	{
		putchar(',');
	}
	numbers++;
	{
		putchar(' ');
		putchar('\n');
	}
	return (0);
}
