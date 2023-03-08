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
		return (sqrtroot(n, (n + 1) / 2));
}
/**
 * sqrtroot-checks if perfect square
 * @n:input
 * @i:counter
 * Return:if square root
 */
int sqrtroot(int n, int i)
{
	if (i < 1)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (sqrtroot(n, i - 1));
}
