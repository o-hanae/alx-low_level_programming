#include "main.h"

/**
 * more_numbers-print the numbers 10 time
 * return:nothing
 */
void more_numbers(void)
{
	int i;
	int x;

	for (i = 0; i <= 9; i++)
	{
		for (x = 0; x <= 14; w++)
		{
			if (y >= 10)
			{
				_putchar((y / 10) + '0');
			}
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}
