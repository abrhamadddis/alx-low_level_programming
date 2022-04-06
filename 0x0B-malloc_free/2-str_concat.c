#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two stringds
 *
 * @s1: input string
 *
 * @s2: inpput string
 *
 * Return: ponter to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k;

	char *str

	i = 0;
	k = 0;
	j = 0;

	if ((s1 == NULL) && (s2 == NULL))
	{
		return (NULL);
	}
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	str = malloc((i + J + 1) * sizeof(char))
	if (str == NULL)
	{
		return (NULL);
	}
	while (k < i)
	{
		str[k] = s1[k];
		k++;
	}
	while (k < j)
	{
		str[k + i] = s2[k];
		k++;
	}
	str[i + j] = '\0';
	return (x);
}
