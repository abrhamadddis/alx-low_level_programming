#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that return the sum two number
 *
 * @argc: The arguments' counter
 *
 * @argv: The arguments' values
 *
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	int num, result = 0, i;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
