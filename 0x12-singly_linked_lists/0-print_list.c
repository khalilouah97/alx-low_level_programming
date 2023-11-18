#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list.
 * @h: the list to be operated.
 *
 * Return: number of list nodes.
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		i++;
		h = h->next;
	}
	return (i);
}
