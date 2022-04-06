#include "main.h"
#include <stdlib.h>

/**
 * _alloc_grid - a function that return a pointer to a 2 dimentsinal array of int
 *
 * @width: input width 
 *
 * @height: input height
 *
 * Return: pointer for 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **array, i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
		for (; j < width; j++)
			array[i][j] = 0;
	return (array);
}
