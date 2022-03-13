#include <stdio.h>

/**
 *main - Starting point
 *
 *Return: 0
 *
 *Descripitions: Prints Hexadecimal numbers in Lowercase
 */

int main(void)
{
	char alpa;

	for (alpa = 0; alpa <= 9; alpa++)
	putchar(alpa + '0');
	for (alpa = 'a'; alpa <= 'f'; alpa++)
	putchar(alpa);
	putchar('\n');

	return (0);
}
