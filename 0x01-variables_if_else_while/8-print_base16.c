#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	char letters;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (letters = 'a'; letters <= 'f'; letters++)
		putchar(letters);

	putchar('\n');
	return (0);

}
