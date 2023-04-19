#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - check code
 * @dog: dog
 * @name: name of dog
 * @age: dog's age
 * @owner: dog's owner
 * Description: a function that initialize a variable of type struct dog
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
