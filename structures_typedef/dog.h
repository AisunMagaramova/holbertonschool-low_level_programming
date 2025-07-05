#ifndef DOG_H
#define DOG_H

/**
 * struct dog - it haqqında elumat saxlayan struktur
 * @name: itin adı (simvol pointeri)
 * @age: itin yasi
 * @owner: itin sahibi (simvol pointeri)
 *
 * Tesviri: Bu struktur itinesaselumatlarını saxlamaq ü�
 * adı, ysi ve  sahibinin adı daxil olmaqla.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
