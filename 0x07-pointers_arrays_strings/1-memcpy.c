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
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}

	return (s);
}


