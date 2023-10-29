#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to the struct
 */

void print_dog(struct dog *d)
{

	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nill)");
	else
		printf("Name: %c", d->name);

	if (d->age < 0)
		printf("Age: (nill)");
	else
		printf("Age: %f", d->age)

	if (d->owner == NULL)
		printf("Owner: (nill)");
	else
		printf("Owner: %c", d->owner);
}

