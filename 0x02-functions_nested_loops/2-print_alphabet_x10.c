#include "main.h"

/**
 * print_alphabet_x10 - prints all alphabets
 * Return: 1
 */
void print_alphabet_x10(void)
{
	int alp;
	int x;

	for (x = 0; x <= 9; x++)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
	}
}
