#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Function that frees the memory allocated
 * @d: Pointer to the dog structure to be freed
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
