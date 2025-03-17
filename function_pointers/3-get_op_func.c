#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - Selects the correct function to perform the operation
 * based on the operator string
 *@s: The operator string (e.g., "+", "-", "*", "/", "%")
 * This function iterates through the `ops` array to find the
 * operator that matches the input string.
 * It returns the corresponding function pointer for the operator,
 * or NULL if no match is found.
 *Return: A pointer to the function that corresponds to the operator,
 * or NULL if the operator is invalid
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (s[0] == ops[i].op[0] && s[1] == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
