#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t
 * @head: pointer to pointer to a DLL
 * @index: index is the index of the node that should be deleted
 *
 * Return: 1 if ti succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	h = *head;
	while (h->prev != NULL)
		h = h->prev;
	if (h != NULL && index == 0)
	{
		if (h->next == NULL)
			*head = NULL;
		else
		{
			(h->next)->prev = NULL;
			*head = h->next;
		}
		free(h);
		return (1);
	}
	if (h != NULL && index != 0)
	{
		for (i = 0; (h != NULL) && (i < index); i++)
			h = h->next;
		if (h != NULL)
		{
			(h->prev)->next = h->next;
			if ((h->prev)->next != NULL)
				(h->next)->prev = h->prev;
			free(h);
			return (1);
		}
		return (-1);
	}
	return (-1);
}
