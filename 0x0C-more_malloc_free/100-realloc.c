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
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
