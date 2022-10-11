#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - funtion that frees dog
 * @d: struct passed
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
		free(d);
	}
}
