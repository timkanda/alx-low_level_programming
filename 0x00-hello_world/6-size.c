#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	printf("Size of char: %d bytes\n", sizeof(char *));
	printf("\nSize of int:%d bytes\n", sizeof(int *));
	printf("\nSize of long int: %d bytes\n", sizeof(long int *));
	printf("\nSize of long long int: %d bytes\n", sizeof(long long int *));
	printf("\nSize of float: %d bytes\n", sizeof(float *));

	return (0);
}

