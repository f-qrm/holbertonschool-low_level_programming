#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point for the calculator program
 *@argc: Argument count
 *@argv: Argument vector (array of strings)
 * This function takes in three arguments
 * (the first number, operator, and second number),
 * performs the corresponding operation, and prints the result.
 * If the input is incorrect, the program will print
 * an error message and exit with an appropriate status code.
 *Return: 0 if successful, or an exit status in case of errors
 */
int main(int argc, char *argv[])
{
	int nr1, nr2;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	nr1 = atoi(argv[1]);
	nr2 = atoi(argv[3]);
	op_func = get_op_func(argv[2]);
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && nr2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", op_func(nr1, nr2));
	return (0);
}
