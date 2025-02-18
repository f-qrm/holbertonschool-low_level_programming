#include <stdio.h>
/**
 *main - entry point
 *
 *Return: always 0
 */
int main(void)
{
	char nombre = 0;

	while (nombre <= 16)
	{
		putchar(nombre);
		nombre++;
	}
	{
		putchar('\n');
	}
	return (0);
}
