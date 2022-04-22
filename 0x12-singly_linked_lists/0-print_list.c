#include <stdio.h>
#include "lists.h"

/**
 * print_list - print the elements off list_t
 *
 * @h: node ponter
 *
 * Return: number of node
 */

size_t print_list(const list_t *h)
{
	unsigned int i;
	const list_t *temp = NULL;

	i = 0;
	temp = h;
	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", temp->len, temp->str);
		}
		temp = temp->next;
		i++;
	}
	return (i);
}

