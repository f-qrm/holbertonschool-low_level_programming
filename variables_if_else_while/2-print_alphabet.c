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
		putchar(lettre);
		lettre++;
	}
	{
		putchar('\n');
	}
	return (0);
}
