#include "main.h"

/**
 * _isupper- check if character is upper.
 * @c:character checker.
 * Return:1-if isupper,0-something else.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
