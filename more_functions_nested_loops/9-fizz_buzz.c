#include <stdio.h>
/**
 * main - entry point
 *Return: always 0
 */
int main(void)
{
	int nr;

	for (nr = 1; nr <= 100; nr++)
	{
		if (nr % 3 == 0 && nr % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (nr % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (nr % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", nr);
		}
	}
	return (0);
}
