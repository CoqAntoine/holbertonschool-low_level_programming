#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) in a dlistint_t list
 * @head: Pointer to the head of the list
 *
 * Return: Sum of all node values, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp;

	if (head == NULL)
		return (0);
	tmp = head;
	while (tmp != NULL)
	{
		sum = sum + tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
