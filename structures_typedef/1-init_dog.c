#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - struct dog tipinde baslatmaq ucuntmaq üçün funksiya
 * @d: gösestiln struct dog növnde deyisen
 * @name: itin adı
 * @age: itin yas
 * @owner: sahibin adı
 *
 * Tesviri: Bu funksiya `d` gösricisinin g�rdiyi strukturu
 * verilmis  elumatlarla doldurur.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
