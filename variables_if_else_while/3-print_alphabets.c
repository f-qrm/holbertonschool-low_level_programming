#include <stdio.h>
/**
 *main - entry point
 *
 *Return: always 0
 */
int main(void)
{
	char lettre = 97;
	char lettreM = 65;

	while (lettre <= 122)
	{
		putchar(lettre);
		lettre++;
	}
	while (lettreM <= 90)
	{
		putchar(lettreM);
		lettreM++;
	}
	{
		putchar('\n');
	}
	return (0);
}
