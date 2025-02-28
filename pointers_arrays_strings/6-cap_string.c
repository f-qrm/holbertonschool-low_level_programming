#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 *@str: string to capitalize
 *Return: str
 */
char *cap_string(char *str)
{
	int i = 0;
	int maj = 1;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		   str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		   str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		   str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		   str[i] == '}')
		{
			maj = 1;
		}
		else if (maj && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
			maj = 0;
		}
		else
		{
			maj = 0;
		}
		i++;
		}
	return (str);
}
