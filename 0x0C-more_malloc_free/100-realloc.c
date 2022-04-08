#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a fucntion that reallocatees a memory block
 *
 * @ptr: pointer from old malloc
 *
 * @old_size: input size for memory location
 *
 * @new_size: input size for memory location
 *
 * Return: nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0;
	char *s;

	if (new_size > old_size)
	{
		s = malloc(new_size);
		free(ptr);
		return (s);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		s = malloc(new_size);
		free(ptr);
		return (s);
	}
	s = malloc(old_size + new_size);
	if (s == NULL)
	{
		return (NULL);
	}
	if (s == NULL)
	{
		return (NULL);
	}
	while (i <= (old_size + new_size))
	{
		s = ptr;
		i++;
	}
	return (s);
}
