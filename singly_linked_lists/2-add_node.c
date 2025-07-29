#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Double pointer to the head of the list
 * @str: String to duplicate and store in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int count = 0;
	char *copy = strdup(str);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (; str[count] != '\0'; count++)
	{
	}

	new->str = copy;
	new->len = count;
	new->next = *head;
	*head = new;

	return (new);
}
