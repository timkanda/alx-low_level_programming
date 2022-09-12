#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	printf("Size of char: %d\n" ,sizeof(char*));
	printf("\nSize of int:%d\n" ,sizeof(int*));
	printf("\nSize of long int: %d\n" ,sizeof(long int*));
	printf("\nSize of long long int: %d\n" ,sizeof(long long int*));
	printf("\nSize of float: %d\n" ,sizeof(float*));

	return (0);
}

