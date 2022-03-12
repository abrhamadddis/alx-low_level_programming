#include <stdio.h>

/**
 *main - Starting point
 *
 *Return: 0
 *
 *Descripitions: Prints single digit number usi
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	putchar(num + '0');
	putchar('\n');

	return (0);
}
