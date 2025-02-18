#include <stdio.h>
/**
 *main - entry point
 *
 *Return: always 0
 */
int main(void)
{
	char nombre = 48;
	char lettre = 65;

	while (nombre <= 57)
	{
		putchar(nombre);
		nombre++;
	}
	while (lettre <= 70)
	{
		putchar(lettre);
		lettre++;
	}
	{
		putchar('\n');
	}
	return (0);
}
