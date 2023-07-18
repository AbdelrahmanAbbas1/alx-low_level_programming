#include "dog.h"
#include <stdlib.h>

/**
 * _strcpy - Copies the string
 * @str1: destination
 * @str2: target
 * Return: a pointer to str1
 */
char *_strcpy(char *str1, char *str2)
{
	int i, k = 0;

	for (i = 0; str2[i] != '\0'; i++)
	{
		str1[k] = str2[i];
		k++;
	}
	str1[i] = '\0';
	return (str1);
}
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
	int len1 = 0, len2 = 0;
	char *dog_name, *dog_owner;

	while (name[len1] != '\0')
		len1++;

	while (owner[len2] != '\0')
		len2++;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	dog_name = malloc(sizeof(char) * (len1 + 1));
	if (dog_name == NULL)
	{
		free(doggy);
		return (NULL);
	}
	dog_owner = malloc(sizeof(char) * (len2 + 1));
	if (dog_owner == NULL)
	{
		free(dog_name);
		free(doggy);
		return (NULL);
	}
	doggy->name = _strcpy(dog_name, name);
	doggy->owner = _strcpy(dog_owner, owner);
	doggy->age = age;
	return (doggy);
}
