#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * 
 * 
 * 
 */
char *_strdup(char *str)
{
    int i;
	char *dstr;

	if(str == NULL)
	{
		return (NULL);
	}
	dstr = malloc((strlen(str) + 1) * sizeof(char));
	if(dstr == NULL)
	{
		return(NULL);
	}
	for(i = 0; str[i] != '\0'; i++)
	{
		dstr[i] = str[i];
	}
	dstr[i] = '\0';
	return (dstr);
}
