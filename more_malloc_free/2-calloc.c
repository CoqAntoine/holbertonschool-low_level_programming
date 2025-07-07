#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	int i = 0;
	unsigned char *p = ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	for (unsigned int i = 0; i < nmemb * size; i++)
		    p[i] = 0;

	return (ptr);
}
