#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	while (num != 0)
	{
		int digit = num % 10;

		num = num / 10;
		printf("%d\n", digit);
	}
	return (0);
}
