#include <stdio.h>

/**
 *main - Starting point
 *
 *Return: 0
 *
 *Descripitions: Prints Alphabet in Lowercase reverse
 */

int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
	putchar(alp);
	putchar('\n');

	return (0);
}
