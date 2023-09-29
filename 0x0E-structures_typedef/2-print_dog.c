#include "dog.h"

/**
*print_dog - struct
*@d: struct input
*
*Return: 0
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->age <= 0)
		printf("age: (nil)\n");
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("name: %s\n", d->name);
	printf("age: %.6f\n", d->age);
	printf("owner: %s\n", d->owner);
}
