#include "main.h"
/**
 * _sqrt_recursion-unction that returns the natural square root of a number
 * @n:character
 * Return:number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (squareroot(n, (n + 1) / 2));
}
