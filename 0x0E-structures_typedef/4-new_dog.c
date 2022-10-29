#include "dog.h"

/**
*new_dog - creates a new dog
*@name: name
*@age: age
*@owner: owner
*
*Return: 0
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_name;
	char *cpy_name, *cpy_owner;
	unsigned int i, name_len = 0, owner_len = 0;

	new_name = malloc(sizeof(dog_t));
	if (name == NULL)
		return (NULL);
	if (name == NULL || age <= 0 || owner == NULL)
	{
		free(new_name);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
		name_len++;
	for (i = 0; owner[i] != '\0'; i++)
		owner_len++;
	cpy_name = malloc(sizeof(char) * (name_len + 1));
	if (cpy_name == NULL)
		return (NULL);
	cpy_owner = malloc(sizeof(char) * (owner_len + 1));
	if (cpy_owner == NULL)
		return (NULL);
	for (i = 0; i <= name_len; i++)
		cpy_name[i] = name[i];
	for (i = 0; i <= owner_len; i++)
		cpy_owner[i] = owner[i];

	new_name->name = cpy_name;
	new_name->owner = cpy_owner;
	new_name->age = age;
	return (new_name);

}
