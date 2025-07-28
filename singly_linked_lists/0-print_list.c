#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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