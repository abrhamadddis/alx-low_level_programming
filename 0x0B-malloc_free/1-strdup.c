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

	while (str[i] != '\0')
	{
		i++;
	}
	s = malloc(i * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	else if (str == NULL)
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
		return (s);
	}
}

