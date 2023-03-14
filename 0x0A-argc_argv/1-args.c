#include "stdio.h"

/**
 * main-program that prints the number of arguments passed into it.
 * @argc:number of commande
 * @argv:number of line commande
 * Return:something
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
