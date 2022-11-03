#include "function_pointers.h"

/**
*print_name - a functions that prints name
*@name: name
*@f: pointer
*Return: 0
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
