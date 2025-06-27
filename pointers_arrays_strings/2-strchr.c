#include "main.h"
#include <stddef.h> /* Null ucun lazimdir*/
/**
 * _strchr - setrinde ilk 'c' xarakterinin yerini tapir
 * @s: axtaris aparilacaq setir
 * @c: tapilacaq xarakter
 *
 * Return: 'c' xaraktern ilk tapildigi yere isare eden painter, tapilmaz null
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0') /*setrin sonuns qeder get */
	{
		if (s[i] == c) /* eger 'c' tapildisa*/
			return (&s[i]); /*hemin yere isare et*/
		i++;
	}

	if (c =='\0') /* eger axtarilan null terminatordursa*/
		return (&s[i]); /* setrin sonundaki '\o'-a isare et*/

	return (NULL); /*tapilmazsa null qaytar*/
}
