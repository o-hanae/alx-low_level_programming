#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("is positive %d \n", n);
	}
	else if (n == 0)
	{
		printf("is zero %d \n", n);
	}
	else if (n < 0)
	{
		printf("is negative %d \n", n);
	}
	return (0);
}
