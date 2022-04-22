#include "lists.h"

/**
 * *add_node_end - function to add node to start
 *
 * @head: pointer to pointer of list_t struct type
 *
 * @str: pointer to sting input
 *
 * Return: always successful
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *first;
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	first = malloc(sizeof(list_t));
	if (first == NULL)
		return (NULL);
	first->str = strdup(str);
	first->len = i;
	if (*head == NULL)
	{
		*head = first;
		first->next = NULL;
		return (*head);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = first;
	first->next = NULL;
	return (*head);
}
