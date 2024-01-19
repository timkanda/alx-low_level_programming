#include "main.h"
int is_prime_number(int n);

/**
*is_prime_number - checks if int is prime number
*@n: input integer
*Return: 1 if prime number otherwise 0
*/
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	else if (check_prime(n, n / 2) > 0)
		return (1);
	return (0);
}

/**
*check_prime - checks if prime
*@n: input
*@y: input
*Return: check prime
*/
int check_prime(int n, int y)
{
	if (y == 1)
		return (1);
	if (n % y == 0)
		return (0);
	else
		return (check_prime(n, y - 1));
}
