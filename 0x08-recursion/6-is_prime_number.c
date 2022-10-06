#include "main.h"
int check_prime(int n, int y);
/**
*is_prime_number - prints prime number
*@n: input
*Return: returns 1 if prime number, otherwise 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (check_prime(n, n / 2) > 0)
		return (1);
	return (0);
}
