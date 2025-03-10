#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings and returns the newly allocated string
 * @s1: The first string.
 * @s2: The second string.
 * Return: A pointer to the newly allocated string containing the concatenated
 *strings, or NULL if memory allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
	int f;
	int i = 0;
	int j = 0;
	char *resultat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	resultat = malloc(i + j + 1);
	if (resultat == NULL)
	{
		return (NULL);
	}
	for (f = 0; f < i; f++)
	{
		resultat[f] = s1[f];
	}
	for (f = 0; f < j; f++)
	{
		resultat[i + f] = s2[f];
	}
	resultat[i + j] = '\0';
	return (resultat);
}
