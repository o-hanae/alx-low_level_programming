#include "main.h"
#include <stdlib.h>
/**
 * create_array-creates an array of chars
 * @size:checker
 * @c:checker
 * Return: size
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int n;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(c));
	if (array == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < size; n++)
	{
		array[n] = c;
	}
	return (array);
}
