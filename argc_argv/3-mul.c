#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies two numbers passed as command line arguments
 *@argc: The argument count (number of arguments)
 *@argv: The argument vector (array of arguments)
 *Return: 0 if successful, 1 if there is an error
 */
int main(int argc, char *argv[])
{
	int nr1;
	int nr2;
	int rslt;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	nr1 = atoi(argv[1]);
	nr2 = atoi(argv[2]);
	rslt = nr1 * nr2;

	printf("%d\n", rslt);
	return (0);
}
