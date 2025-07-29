#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given index
 * @h: Double pointer to the head of the list
 * @idx: Index at which to insert the new node
 * @n: Data to store in the new node
 *
 * Return: Address of the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *tmp = *h;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (tmp != NULL && i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = tmp->next;
	new->prev = tmp;

	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
