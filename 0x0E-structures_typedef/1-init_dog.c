#include "dog.h"

/**
 * init_dog - initialises a variable type of struct dog
 * @d: The struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: Name of the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
