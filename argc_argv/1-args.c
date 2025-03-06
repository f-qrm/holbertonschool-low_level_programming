#include "main.h"
#include <stdio.h>
/**
 * main - The entry point of the program.
 *@argc: The number of arguments passed to the program
 *(including the program name).
 *@argv: An array of strings representing the arguments passed to the program.
 *The first element (argv[0]) is the program name itself
 *Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
