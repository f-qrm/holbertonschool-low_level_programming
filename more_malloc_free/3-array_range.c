#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of integers in the range from min to max
 *@min: The minimum value in the range
 *@max: The maximum value in the range
 *Return: A pointer to the newly created array, or NULL if allocation fails
 */
int *array_range(int min, int max)
{
	int *tableau;
	int i;
	int taille;

	if (min > max)
	{
		return (NULL);
	}
	taille = max - min + 1;
	tableau = (int *) malloc(taille * sizeof(int));
	if (tableau == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < taille; i++)
	{
		tableau[i] = min + i;
	}
	return (tableau);
}
