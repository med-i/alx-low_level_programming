#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the owner of the dog.
 *
 * Return: pointer to the created dog_t struct, otherwise NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (!d)
		return (NULL);

	d->name = malloc(strlen(name) + 1);
	if (!d->name)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(strlen(owner) + 1);
	if (!d->owner)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);

	return (d);
}
