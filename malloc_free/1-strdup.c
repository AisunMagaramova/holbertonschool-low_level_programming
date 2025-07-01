#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated duplicate of the string str
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string
 */
char	*_strdup(char *str)
{
	char	*dup;
	int		len = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];

	dup[len] = '\0';

	return (dup);
}
