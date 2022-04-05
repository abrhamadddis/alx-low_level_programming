#include "main.h"
#include <stdlib.h>

/**
 * create_array - a funcdtion that creates of chars
 *
 * @size: size of arrray
 *
 * @c: input char
 *
 * Return: pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;

	char *s;

	s = malloc(size * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	else if (size == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
