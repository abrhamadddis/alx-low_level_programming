#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the pointer to the DLL
 * @idx: index of the list where the new node should be added, starts at 0
 * @n: data to be set for the new node
 *
 * Return: the address of the new added node, NULL otherwise
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		free(new);
		return (add_dnodeint(h, n));
	}
	current = *h;
	while (current->prev != NULL)
		current = current->prev;
	for (i = 0; (current != NULL) && (i < idx - 1); i++)
		current = current->next;
	if (current == NULL)
	{
		free(new);
		return (NULL);
	}
	if (current->next == NULL)
	{
		new->next = NULL;
		new->prev = current;
		current->next = new;
	}
	else
	{
		new->next = current->next;
		new->prev = current;
		(current->next)->prev = new;
		current->next = new;
	}
	return (new);
}
