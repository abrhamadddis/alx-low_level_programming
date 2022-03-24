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
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0' && n > 0; c++, n--, i++)
	{
		dest[i] = src[c];
	}
	return (dest);
}

