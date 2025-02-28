#include "main.h"
/**
 * leet - encodes a string into 1337
 *@str: the string to be encoded
 *
 *Return: the encoded string
 */
char *leet(char *str)
{
	char let[] = "aAeEoOtTlL";
	char rempl [] = "4433007711";
	int i;
	int j;

	for (i = 0; str[i] != '\0' ; i++)
	{
		for (j = 0; let[j] != '\0'; j++)
		{
			if (str[i] == let[j])
			{
				str[i] = rempl[j];
				break;
			}
		}
	}
	return (str);
}
