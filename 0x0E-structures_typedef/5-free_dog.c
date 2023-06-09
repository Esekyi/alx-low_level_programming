#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - check code
 * @d: pointer to struct
 * Description: frees a dog structure
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
