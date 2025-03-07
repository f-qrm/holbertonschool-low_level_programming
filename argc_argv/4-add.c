#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * in_positive_number - This function checks if a string represents
 * a positive number.
 * @str: The string to be checked.
 * Return: 1 if the string is a positive number, 0 otherwise.
 */
int in_positive_number(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/**
 * main - The main function that handles the input and computes the
 * sum of positive numbers.
 * @argc: The number of arguments passed to the program.
 * @argv: The array of argument strings passed to the program.
 * Return: 0 if successful, 1 if an error occurs (non-numeric input).
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!in_positive_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
