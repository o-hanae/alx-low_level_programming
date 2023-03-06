#include "main.h"

/**
 * _strncat-Concatenates two strings using at most
 * @dest:carachter
 * @src:carachter
 * @n:int
 * Return:dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int dest_len = 0;

	while (dest[i++])
	{
		dest_len++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[dest_len++] = src[i];
	}
	return (dest);
}
