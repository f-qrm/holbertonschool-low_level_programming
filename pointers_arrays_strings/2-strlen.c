#include "main.h"
/**
 * _strlen - This function calculates the length of a string.
 * @s: The string for which the length is calculated.
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int longeur = 0;

	while (s[longeur] != '\0')
	{
		longeur++;
	}
	return (longeur);
}
