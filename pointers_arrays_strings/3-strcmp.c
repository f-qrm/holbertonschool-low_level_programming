#include "main.h"
/**
 * _strcmp - Write a function that compares two strings
 *@s1: first string
 *@s2: second string
 *
 *Return: dif
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int dif = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	dif = s1[i] - s2[i];
	return (dif);
}
