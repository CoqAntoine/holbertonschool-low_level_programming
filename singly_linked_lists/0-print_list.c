#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	while (i++)
	{
	printf("[%d] %s\n", h->len, h->str);
	if (h->next == NULL)
		break;
	}

	return (i);
}