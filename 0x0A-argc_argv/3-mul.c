#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that return the product two number
 *
 * @argc: The arguments' counter
 *
 * @argv: The arguments' values
 *
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	int pro = 1;

	int x, y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);	
		pro = x * y;
		printf("%d\n", pro);
	}
	return (0);
}
