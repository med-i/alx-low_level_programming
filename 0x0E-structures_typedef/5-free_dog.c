#include "dog.h"

/**
 * free_dog - frees dog struct.
 * @d: the dog struct to free.
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
