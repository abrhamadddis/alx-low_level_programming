#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 *
 * @max: input integer
 *
 * @min: input integer
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *s;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	s = malloc((max - min + 1) * sizeof(int));
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (min <= max)
	{
		s[i] = min;
		min++;
		i++;
	}
	return (s);
}
