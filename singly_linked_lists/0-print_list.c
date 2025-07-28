#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t linked list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t count = 0, j;

	while (h != NULL)
	{
		_putchar('[');
		_putchar('0' + h->len);
		_putchar(']');
		_putchar(' ');
		if (h->str != NULL)
		{
			for (j = 0; h->str[j] != '\0'; j++)
			{
				_putchar(h->str[j]);
			}
		}
		else
		{
			_putchar('(');
			_putchar('n');
			_putchar('i');
			_putchar('l');
			_putchar(')');
		}

		_putchar('\n');

		h = h->next;
		count++;
	}

	return (count);
}
