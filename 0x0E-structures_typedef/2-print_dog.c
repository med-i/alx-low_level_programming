#include "dog.h"
/**
 * print_dog - prints a struct dog.
 * @d: the dog struct to print.
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf(d->age ? "%f\n" : "(nil)\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
