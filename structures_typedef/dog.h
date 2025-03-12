#ifndef DOG_H
#define DOG_H
/**
 * struct dog - A structure representing a dog.
 *@name: A pointer to a string representing the dog's name (char *).
 *@age: The dog's age (float).
 *@owner: A pointer to a string representing the dog's owner's name (char *)
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
