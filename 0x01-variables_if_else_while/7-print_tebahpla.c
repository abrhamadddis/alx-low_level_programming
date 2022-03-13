#include <stdio.h>
/**
 * main starting function
 *
 * Return: 0
 *
 * Descripition: a program that print the lowercase alphabet in reverse order
 */
int main(void)
{
char alp;
for (alp = 'z'; alp >= 'a'; alp--)
{
	putchar(alp);
	putchar('\n');
}
return (0);
}
