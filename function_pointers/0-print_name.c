#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * using the provided function pointer
 *@name: the name to be printed
 *@f: A function pointer that points to a function
 * that takes a char pointer and returns void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
