#include "lists.h"

/**
* free_listint2 - a function that frees a listint_t list.
* @head: a pointer to the head of the list.
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
	{
		return;
	}
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
