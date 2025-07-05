#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - funksiyası dog_t strukturunu e onun daxilki yaddası azad edir
 * @d: serbest buraxılacaq dog_t pointeri
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
