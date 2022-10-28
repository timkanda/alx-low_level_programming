#include "dog.h"

/**
*init_dog - initialize a variable of type
*@d: struct
*@name: input name
*@age: input age
*@owner: input owner
*return: 0
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
			return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
