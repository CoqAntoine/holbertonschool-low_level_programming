#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: Double pointer to the head of the list
 * @n: Value to store in the new node
 *
 * Return: Address of the new node, or NULL on failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (*head != NULL)
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
		new->n = n;
		new->next = NULL;
		new->prev = temp;
	}
	else
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
	}

	return (new);
}
