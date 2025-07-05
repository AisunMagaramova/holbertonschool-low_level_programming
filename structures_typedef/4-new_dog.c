#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - yeni dog_t yaradır, elumatları kopyalayır
 * @name: itin adı
 * @age: itin yas
 * @owner: itin sahibi
 *
 * Return: yeni yaradılan dog_t pointeri, gursuz olarsa NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *name_copy, *owner_copy;

	/* Yaddas ayır */
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	/* name üçün yas ve kopyalama */
	if (name == NULL)
		name_copy = NULL;
	else
	{
		name_copy = malloc(strlen(name) + 1);
		if (name_copy == NULL)
		{
			free(d);
			return (NULL);
		}
		strcpy(name_copy, name);
	}

	/* owner üçün ys v�e kopyalama */
	if (owner == NULL)
		owner_copy = NULL;
	else
	{
		owner_copy = malloc(strlen(owner) + 1);
		if (owner_copy == NULL)
		{
			free(name_copy);
			free(d);
			return (NULL);
		}
		strcpy(owner_copy, owner);
	}

	/* Deyerleri struktura yesdir */
	d->name = name_copy;
	d->age = age;
	d->owner = owner_copy;

	return (d);
}
