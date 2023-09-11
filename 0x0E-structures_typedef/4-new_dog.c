#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the newly created dog, or NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_length = 0, owner_length = 0;
	int i;

	/* Calculate the length of the name and owner strings */
	while (name[name_length] != '\0')
		name_length++;
	while (owner[owner_length] != '\0')
		owner_length++;

	/* Allocate memory for the new dog structure */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* Allocate memory for the name and owner strings */
	new_dog->name = malloc((name_length + 1) * sizeof(char));
	new_dog->owner = malloc((owner_length + 1) * sizeof(char));

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	/* Copy the name and owner strings */
	for (i = 0; i <= name_length; i++)
		new_dog->name[i] = name[i];
	for (i = 0; i <= owner_length; i++)
		new_dog->owner[i] = owner[i];

	/* Set the values of the new dog */
	new_dog->age = age;

	return (new_dog);
}
