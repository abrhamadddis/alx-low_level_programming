#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function returns a pointer to new string
 *
 * @str: input string
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	int i, j;

	char *s;

	i = 0;
	j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	s = malloc((i + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		while (j < i)
		{
			s[j] = str[j];
			j++;
		}
	}
	return (s);
}

