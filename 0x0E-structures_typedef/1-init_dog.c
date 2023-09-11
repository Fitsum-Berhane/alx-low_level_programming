#include <stdio.h>
#include "dog.h"
/**
 * init_dog - a function to initialize the name, age and owener
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
