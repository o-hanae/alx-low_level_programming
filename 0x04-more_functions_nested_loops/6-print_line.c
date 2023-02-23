#include "main.h"

/**
 * print_line- prints 10 times the numbers, from 0 to 14
 * @n:int
 * Return: nothing
 */
void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a < n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
