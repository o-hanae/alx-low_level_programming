#include <stdio.h>

/**
 * times_table-prints the 9 times table, starting with 0.
 *
 */
void times_table(void)
{
	int x, y, i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			x = i * j;
			_putchar(',');
			if (x <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(x + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
