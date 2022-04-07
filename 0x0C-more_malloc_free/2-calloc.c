#include <stdlib.h>
#include "main.h"

/**
 * _calloc - a function that allocates memenory for an array
 *
 * @nmemb: input size of array
 *
 * @size: input size of char
 *
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	s = malloc(nmemb * size);
	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (i < nmemb * size)
		{
			s[i] == 0;
			i++;
		}
	}
	return (s);
}
