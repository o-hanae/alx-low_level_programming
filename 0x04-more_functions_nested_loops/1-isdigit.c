#include "main.h"

/**
 * _isdigit- check if character isdigi.
 * @c:character checker.
 * Return:1-if isdigit,0-something else.
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
