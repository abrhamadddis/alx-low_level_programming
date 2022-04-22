#include "lists.h"

/**
 * free_list - function to free nodes
 *
 * @head: pointer to nodes
 *
 * Return: always successful
 */
void free_list(list_t *head)
{
	while(head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
