#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
*main - Entry point
*@argc: number of arguments
*@argv: array of argument
*atoi converts string to integer
*Return: 0
*/
int main(int argc, char *argv[])
{
	int i, out = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			out *= atoi(argv[i]);
		}
		printf("%d\n", out);
	}
	return (0);
}
