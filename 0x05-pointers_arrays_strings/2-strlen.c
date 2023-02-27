#include "main.h"

/**
 * _strlen-function print the length of a string.
 * @s:character
 * Return:length of a string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	return (count);
}
