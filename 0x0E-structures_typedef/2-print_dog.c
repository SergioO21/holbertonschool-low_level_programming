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
		if (d->name == 0)
			printf("(nil)\n");

		else
			printf("Name: %s\n", d->name);

		if (d->age == 0)
			printf("(nil)\n");

		else
			printf("Age: %f\n", d->age);

		if (d->owner == 0)
			printf("(nil)\n");

		else
			printf("Owner: %s\n", d->owner);
	}
}
