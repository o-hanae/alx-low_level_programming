#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
char alp = 'a';

while (alp <= 'z')
{
if (alp != 'e' && alp != 'q')
{
putchar(alp);
}
alp++;
}
putchar('\n');
return (0);
}
