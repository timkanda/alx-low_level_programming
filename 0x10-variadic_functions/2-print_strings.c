#include "variadic_functions.h"

/**
*print_strings - prints strings
*@separator: char input
*@n: input
*
*Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *st;

	if (separator == NULL)
		return;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		st = va_arg(list, char*);
		if (st == NULL)
		{
			st = "(nill)";
		}
		printf("%s", st);
		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
