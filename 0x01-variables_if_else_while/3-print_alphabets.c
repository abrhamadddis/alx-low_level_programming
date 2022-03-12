#include <stdio.h>

/**
 *main - Starting point
 *
 *Return: 0
 *
 *Description: Prints Alphabet in Lowercase and Uppercase
 */

int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	putchar(alp);
	for (alp = 'A'; alp <= 'Z'; alp++)
	putchar(alp);
	putchar('\n');

	return (0);
}
