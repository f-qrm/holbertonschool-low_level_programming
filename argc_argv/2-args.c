#include "main.h"
#include <stdio.h>
/**
 * main - The entry point of the program.
 * @argc: The number of arguments passed.
 * @argv: Array of arguments.
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
