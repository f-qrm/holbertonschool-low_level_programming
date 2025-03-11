#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * 
 * 
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int f;
	unsigned int len1;
	unsigned int len2;
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
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
	{
		n = len2;
	}
	resultat = malloc (len1 + n + 1);
	if (resultat == NULL)
	{
		return(NULL);
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
