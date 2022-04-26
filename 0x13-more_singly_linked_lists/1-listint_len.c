#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function that return elementsin linked list
 *
 * @h: listint_t type of node struct
 *
 * Return: always successful
 */
size_t listint_len(const listint_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
