#include <stdio.h>
#include "function_pointer.h"

/**
 * array_iterator - function to iterate through arrays
 *
 * @array: pointer to array of int type
 *
 * @size: type of size_t typedef
 *
 * @action: pointer to function
 *
 * Return: always successful
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL)
		return;
	if (size <= 0)
		return;
	if (array == NULL)
		return;
	while (i < size)
	{
		action(array[i]));
	}
}
