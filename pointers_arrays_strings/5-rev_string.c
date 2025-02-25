#include "main.h"
/**
 *rev_string - Reverse the string
 * @s: The string to reverse
 *
 */
void rev_string(char *s)
{
	char *rev = s;
	char temp;

	while (*s)
	{
		s++;
	}
	s--;
	while (s > rev)
	{
		temp = *s;
		*s = *rev;
		*rev = temp;
		s--;
		rev++;
	}
}
