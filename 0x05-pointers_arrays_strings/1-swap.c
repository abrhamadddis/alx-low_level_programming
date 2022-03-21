#include "main.h"

/**
 * swap_int - swap the value two variable
 *
 * @a: input
 *
 * @b: output
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = b;
	*b = n;
}
