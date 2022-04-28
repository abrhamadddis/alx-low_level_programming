#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - a function that convert binary num to unsigned int
 *
 * @b: pointing to string
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0;
	unsigned int check = 1;
	int x;

	if (b == NULL)
	{
		return (0);
	}
	x = 0;
	while (b[x] != '0')
	{
		if (b[x] != '0' && b[x] != '1')
		{
			return (0);
		}
		count <<= 1;
		if (b[x] == '1')
		{
			count ^= check;
		}
		x++;
	}
	return (count);
}
