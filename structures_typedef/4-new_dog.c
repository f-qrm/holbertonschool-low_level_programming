#include "dog.h"
#include <stdlib.h>
/**
 * length - Function to calculate the length of a string
 * @str: The string whose length is to be calculated
 * Return: The length of the string (excluding the null terminator)
 */
unsigned int length(char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * new_dog - function that creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the dog's owner
 * Return: A pointer to the newly created dog object, or NULL
 * if memory allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	unsigned int name_len;
	unsigned int owner_len;
	unsigned int i;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	name_len = length(name);
	owner_len = length(owner);
	dog->name = malloc(name_len + 1);
	dog->owner = malloc(owner_len + 1);
	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
	{
		dog->name[i] = name[i];
	}
	dog->name[name_len] = '\0';
	for (i = 0; i < owner_len; i++)
	{
		dog->owner[i] = owner[i];
	}
	dog->owner[owner_len] = '\0';
	dog->age = age;
	return (dog);
}
