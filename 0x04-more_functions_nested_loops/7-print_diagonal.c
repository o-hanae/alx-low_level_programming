#include "main.h"

/**
 * print_diagonal-draws a diagonal line on the terminal
 * @n:int
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i;
	int y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (y = 1; y <= i; y++)
			{
				if (i == n)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
