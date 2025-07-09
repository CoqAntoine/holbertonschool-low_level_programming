#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * len - Returns the length of a string
 * @str: Pointer to the string
 *
 * Return: Length of the string
 */

int len(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
	}

	return (i);
}

/**
 * strcp - Copies a string to a destination buffer
 * @dest: Destination buffer
 * @src: Source string
 *
 * Return: Pointer to destination buffer
 */

char *strcp(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog struct with name, age, and owner
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to new dog_t struct, or NULL on failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || age < 0.0 || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * (len(name) + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	else
		d->name = strcp(d->name, name);

	d->age = age;

	d->owner = malloc(sizeof(char) * (len(name) + 1));
	if (d->owner == NULL)
	{
		free(d);
		return (NULL);
	}
	else
		d->owner = strcp(d->owner, owner);

	return (d);
}
