#include "lists.h"

/**
 * list_len - a function that return the size of node
 *
 * @h: poiner to node
 *
 * Return: always successful
 */
size_t list_len(const list_t *h)
{
	unsigned int i;
	const list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (0);
	}
	i = 0;
	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
