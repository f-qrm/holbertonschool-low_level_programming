#include "main.h"
#include <stdlib.h>
/**
 *string_nconcat - function that concateenantes two strings
 *@s1: the string to be copyed
 *@s2: the string to be copyed
 *@n: the number of caracteres to copy of s2
 *Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, f;
	char *resultat;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
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
	if (n > j)
	{
		n = j;
	}
	resultat = malloc(1 + n + 1);
	if (resultat == NULL)
	{
		return (NULL);
	}
	for (f = 0; f < i; f++)
	{
		resultat[f] = s1[f];
	}
	for (f = 0; f < n; f++)
	{
		resultat[i + f] = s2[f];
	}
	resultat[i + j] = '\0';
	return (resultat);
}
