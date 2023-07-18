#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: return a pointer to struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = name;
	doggy->age = age;
	doggy->owner = owner;

	return (doggy);
}
