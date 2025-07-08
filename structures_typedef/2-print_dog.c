#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints a struct dog, handling NULL fields gracefully
 * @d: Pointer to struct dog to print
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: ");
	if (d->name == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", d->name);

	printf("Age: %.1f\n", d->age);

	printf("Owner: ");
	if (d->owner == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", d->owner);

}
