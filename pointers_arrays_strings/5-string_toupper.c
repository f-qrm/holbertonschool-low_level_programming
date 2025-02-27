#include "main.h"
/**
 * string_toupper - Write a function that changes
 * all lowercase letters of a string to uppercase
 *@str: the string to be modified
 *Return: the pointer to the modified string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}
	return (str);
}
