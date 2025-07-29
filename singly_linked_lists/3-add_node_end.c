#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Double pointer to the head of the list
 * @str: String to duplicate and store in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;
	int count = 0;
	char *copy = strdup(str);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	for (; str[count] != '\0'; count++)
	{
	}
	if (copy == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = copy;
	new->len = count;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (new);
}
