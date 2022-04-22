#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 *
 * @head: pointer to poiner
 *
 * @str: pointer to string
 *
 * Return: always successful
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	list_t *temp = NULL;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	temp->len = counter;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;

	return (*head);
}
