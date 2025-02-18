#include <stdio.h>
/**
 *main - entry point
 *
 *Return: always 0
 */
int main(void)
{
	char nombre = 48;
	char lettre = 97;

	while (nombre <= 57)
	{
		putchar(nombre);
		nombre++;
	}
	while (lettre <= 102)
	{
		putchar(lettre);
		lettre++;
	}
	{
		putchar('\n');
	}
	return (0);
}
