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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
