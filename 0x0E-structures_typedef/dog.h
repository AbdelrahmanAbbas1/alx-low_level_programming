#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure of dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *str1, char *str2);
void free_dog(dog_t *d);
#endif
