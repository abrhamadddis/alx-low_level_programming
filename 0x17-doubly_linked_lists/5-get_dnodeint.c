#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to the dll
 *
 * Return: void, nth
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head->prev != NULL)
		head = head->prev;
	while (1)
	{
		if (head->next == NULL)
		{
			free(head);
			return;
		}
		head = head->next;
		free(head->prev);
	}
}
