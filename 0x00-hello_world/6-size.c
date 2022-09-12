#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	printf("Size of char: %d byte(s)\n", sizeof(char *));
	printf("\nSize of int:%d byte(s)\n", sizeof(int *));
	printf("\nSize of long int: %d byte(s)\n", sizeof(long int *));
	printf("\nSize of long long int: %d byte(s)\n", sizeof(long long int *));
	printf("\nSize of float: %d byte(s)\n", sizeof(float *));

	return (0);
}

