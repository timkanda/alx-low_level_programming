#include "variadic_functions.h"

/**
*print_all - functions prints anything
*c = char, i = int, f = float, s = char * (if null print (nill))
*@format: list of arguments
*Return: 0
*/
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, n = 0;
	char *st;
	char *sep = ", ";

	va_start(list, format);

	while (format && format[i])
		i++;
	while (format && format[n])
	{
		if (n == (i - 1))
		{
			sep = "";
		}
		switch (format[n])
		{
			case 'c':
				printf("%c%s", va_arg(list, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(list, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(list, double), sep);
				break;
			case 's':
				st = va_arg(list, char *);
				if (st == NULL)
					st = "(nill)";
				printf("%s%s", st, sep);
				break;
		}
		n++;
	}
	printf("\n");
	va_end(list);

}
