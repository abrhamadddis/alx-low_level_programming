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
        int sum = 0;

        int x, y;

        if (argc < 1)
        {
                return (1);
        }
	else if (argc == 1)
	{
		x = atoi(argv[1]);
		printf("%d\n", sum);
        else
        {
                x = atoi(argv[1]);
                y = atoi(argv[2]);
                pro = x * y;
                printf("%d\n", sum);
        }
        return (0);
}
