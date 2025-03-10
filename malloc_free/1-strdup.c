#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Duplicates a string by allocating new memory and copying
 * the string into it.
 *@str: The string to be duplicated.
 *Return: A pointer to the newly duplicated string, or NULL if allocation
 *fails or if str is NULL.
 */
char *_strdup(char *str)
{	int i;
	int length = 0;
	char *dstr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}
	dstr = malloc((length + 1) * sizeof(char));
	if (dstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		dstr[i] = str[i];
	}
	dstr[i] = '\0';
	return (dstr);
}
