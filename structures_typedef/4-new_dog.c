#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - Creates a new dog and allocates memory dynamically.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The name of the dog's owner.
 * Return: A pointer to the new dog, or NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = strdup(name);
	if (dog->name == NULL)
	{
		free(dog);
	return (NULL);
	}
	dog->age = age;
	dog->owner = strdup(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	return (dog);
}
