#include <stdio.h>
/**
 *main - entry point
 *
 *Return: always 0
 */
int main(void)
{
	char lettre = 97;

	while (lettre <= 122)
	{
		if (lettre != 113 && lettre != 101)
		putchar(lettre);
		lettre++;
	}
	{
		putchar('\n');
	}
	return (0);
}
