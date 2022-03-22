#include "main.h"
#include <stdio.h>

/**
 * print_array - print element of array
 *
 * @a: input array
 *
 * n: size of array
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	Printf("\n");
}
