#include "main.h"
#include "stdlib.h"

/**
 * malloc_checked - a function that allocates memory
 *
 * @b: input integer
 *
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	else
	{
		return (s);
	}
}
