#include "main.h"

/**
 * _memset -fils memory with a constatn byte
 *
 * @s: buffer array
 *
 * @b: constant byte
 *
 * @n: number of bytes of memory area to fill
 *
 * Return: pointer to memory area 's'
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		s[i] = b;
	}
	return (s);
}
