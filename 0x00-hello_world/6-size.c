#include <stdio.h>
/**
  * main - this prints hello
  * Return: This returns 0
  */
int main(void)
{
char c;
int x;
long int name;
long long int z;
float f;
printf("Size of a char: %lu byte(s)\n", sizeof(c));
printf("Size of an int: %lu byte(s)\n", sizeof(x));
printf("Size of a long int: %lu byte(s)\n", sizeof(name));
printf("Size of a long long int: %lu byte(s)\n", sizeof(z));
printf("Size of a float: %lu byte(s)\n", sizeof(f));
return (0);
}
