#include "main.h"
#include <stddef.h>

/**
 * _strchr - setrinde ilk 'c' xarakterinin yerini tapir
 * @s: axtaris aparilacaq setir
 * @c: tapilacaq xarakter
 *
 * Return: 'c' xarakter ilk tapildigi yere isare eden painter, tapilmaz null
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}

	if (c == '\0')
		return (&s[i]);

	return (NULL);
}
