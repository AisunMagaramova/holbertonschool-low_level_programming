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

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
