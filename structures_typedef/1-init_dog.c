#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Initializes a variable of type struct dog.
 *@d: A pointer to the dog structure to initialize.
 *@name: The name of the dog.
 *@age: The age of the dog.
 *@owner: The owner of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
