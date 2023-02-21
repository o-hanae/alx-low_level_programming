#include "main.h"

/**
 * print_sign- check if character is positive , negatif or 0.
 * @n:character checker.
 * Return:0-if zero,1-if positif ,-1-if negatif.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
