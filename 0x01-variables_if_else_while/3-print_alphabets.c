#include <stdio.h>
/**
 *main -starting function
 *
 * Return: 0
 *
 * Description: print alphabet in lowercase and uppercase
 */

int main(void)
{
char alp;
for (alp = 'a'; alp <= 'z'; alp++)
{
	putchar(alp);
	putchar('\n');
}
for (alp = 'A'; alp <= 'Z'; alp++)
{
	putchar(alp);
	putchar('\n');
}
return (0);
}

