#include "main.h"

/**
 * print_last_digit-check if character is write the last digit
 * @n:checker
 * Return:the last digit.
 */
int print_last_digit(int n)
{
	int r;

	r = (n % 10);
	if (r < 0)
	{
		r = (r * -1);
	}
	_putchar('0' + r);
	return (r);
}
