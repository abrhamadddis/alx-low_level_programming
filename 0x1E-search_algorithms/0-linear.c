#include "search_algos.h"

/**
 *  linear_search - serach a value in a given array and return the index
 *  @array: is a poiner to the first element of an serach
 *  @size: the number of elements in the array
 *  @value: the value to serach for
 *  Return: if the value is not present of the give array is null
 *          return -1
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (array == NULL)
        return -1;

    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
    
    }

    return (-1);
}