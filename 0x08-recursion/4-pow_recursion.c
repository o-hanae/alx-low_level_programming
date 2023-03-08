#include "main.h"

/**
 * _pow_recursion-function that returns the value of x raised to the power of y
 * @x:character
 * @y:character
 * Return:power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if else (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
