#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n, LastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	scanf("%d", &n);
	LastDigit = n % 10;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, LastDigit);
	else if (n == 0)
		printf("Last digit of %d is and is 0\n", n);
	else if (n < 6)
		printf("Last digit of %d is and is less than 6 and not 0\n", n);
	return (0);

}
