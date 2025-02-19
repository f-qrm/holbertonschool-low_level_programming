#include "main.h"
/**
 * _islower - checks if a character is a lowercase letter
 * @c: The character to check
 *
 *Return: if  lowerscase 1, otherwise 1
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
