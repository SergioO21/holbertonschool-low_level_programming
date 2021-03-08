#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a data structure dog.
 *
 * @d: Data structure.
 */

void print_dog(struct dog *d)
{
	if (d != 0)
	{
		d->name == 0 ? printf("(nil)\n") : printf("Name: %s\n", d->name);
		d->age == 0 ? printf("(nil)\n") : printf("Age: %f\n", d->age);
		d->owner == 0 ? printf("(nil)\n") : printf("Owner: %s\n", d->owner);
	}
}
