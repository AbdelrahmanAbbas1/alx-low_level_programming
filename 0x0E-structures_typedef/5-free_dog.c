#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees memory allocated dogs
 * @d: the structure variable to be freed
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
