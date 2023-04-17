#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog.
 * @d: the struct to initialize.
 * @name: the name of the dog.
 * @age: the gae of the dog.
 * @owner: the owner of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d->name)
		d->name = name;

	if (d->age)
		d->age = age;

	if (d->owner)
		d->owner = owner;
}
