#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node to return (starting at 0)
 *
 * Return: Pointer to the node at the given index, or NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr_index;
	unsigned int i = 0;

	ptr_index = head;
	while (i < index)
	{
		if (ptr_index->next == NULL)
			return (NULL);
		i++;
		ptr_index = ptr_index->next;
	}
	return (ptr_index);
}
