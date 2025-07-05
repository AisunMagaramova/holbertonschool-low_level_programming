#include <stdlib.h>
#include "dog.h"

int _strlen(char *s)
{
    int len = 0;
    while (s[len] != '\0')
        len++;
    return (len);
}

char *_strcpy(char *dest, char *src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *d;
    char *name_copy, *owner_copy;

    d = malloc(sizeof(dog_t));
    if (d == NULL)
        return NULL;

    if (name == NULL)
        name_copy = NULL;
    else
    {
        name_copy = malloc(_strlen(name) + 1);
        if (name_copy == NULL)
        {
            free(d);
            return NULL;
        }
        _strcpy(name_copy, name);
    }

    if (owner == NULL)
        owner_copy = NULL;
    else
    {
        owner_copy = malloc(_strlen(owner) + 1);
        if (owner_copy == NULL)
        {
            free(name_copy);
            free(d);
            return NULL;
        }
        _strcpy(owner_copy, owner);
    }

    d->name = name_copy;
    d->age = age;
    d->owner = owner_copy;

    return d;
}
