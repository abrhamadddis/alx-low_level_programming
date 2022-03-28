#include "main.h"

/**
 * _memcpy - copy memory area
 *
 * @dest: char array to copy into
 *
 * @src: number of elements to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char src, unsigned int n)
{
	int i;

	char *pointer;

	pointer = dest;
	for (i = 0; i <= n; i++)
	{
		*dest[i] = *src[i];
	}
	return (pointer);
}


