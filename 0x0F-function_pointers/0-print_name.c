#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function to print name
 *
 * @name: pointer of char type
 *
 * @f: pointer to function
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *f))
{
	if (f == NULL)
	{
		return;
	}
	f(name);
}
