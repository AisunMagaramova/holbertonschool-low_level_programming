#include <stdio.h>
#include "dog.h"

/**
 * print_dog - struct dog tipinde deyisenin melumatlarını çap edir
 * @d: çap edecek sturuct dog gostericisi
 *
 * Tesvir eger gosterici null olarsa uygun selilde cap et
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %.1f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
