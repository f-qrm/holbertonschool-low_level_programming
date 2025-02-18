#include <stdio.h>
/**
 *main - entry point
 *
 *Return: always 0
 */
int main(void)
{
	char lettre = 122;

	while (lettre >= 97)
	{
		putchar(lettre);
		lettre--;
	}
	{
		putchar('\n');
	}
	return (0);
}
