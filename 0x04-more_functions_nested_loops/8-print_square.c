#include "main.h"

/**
 * print_square-prints a square.
 * @size:character
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			putchar('\n');
			for (j = 1; j <= size; j++)
			{
				if (j == i)
				{
					putchar('#');
				}
				else
				{
					putchar('#');
				}
			}
		}
		putchar('\n');
	}
}
