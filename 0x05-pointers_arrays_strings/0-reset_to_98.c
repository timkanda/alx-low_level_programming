#include "main.h"
#include <unistd.h>
/**
*reset_to_98 - resets the value it points to 98
*@n: a pointer integer we want to set to 98
*
*Return:nothing
*/
void reset_to_98(int *n)
{
	_putchar("%p\n", n);
	*n = 98;
}

/**
*main - changes the value of the variable
*it is declared in, using a pointer
*
*Return: Always 0
*/
int main(void)
{
	int n;
	int *p;

	p = &n;
	n = 50;
	_putchar("%d\n", n);
	reset_to_98(p);
	_putchar("%d\n", n);
	return (0);
}
