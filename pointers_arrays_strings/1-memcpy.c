#include "main.h"

/**
 * _memcpy - n baytlıq məlumatı bir yaddaşdan digərinə kopiya edir
 * @dest: hədəf yaddaş (nəyin içərisinə yazılır)
 * @src: mənbə yaddaş (haradan oxunur)
 * @n: neçə bayt kopiya ediləcək
 *
 * Return: dest göstəricisini qaytarır
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i]; /* mənbədən hədəfə köçür */
	}

	return (dest);
}
