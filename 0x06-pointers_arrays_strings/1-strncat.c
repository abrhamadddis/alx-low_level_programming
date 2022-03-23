#include "main.h"

/**
 * _strncat - a function that connnects two strings
 *
 * @dest: input char string
 *
 * @src: input char string
 *
 * @n: number of elementes to concatenate in
 *
 * Return: pointer to resuling 'dest'
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] <= '\0' && n > 0; j++, i++, n--)
	{
		dest[i] = src[j];
	}
	return (dest);
}

