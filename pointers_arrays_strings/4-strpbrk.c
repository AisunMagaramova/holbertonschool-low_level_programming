#include <stddef.h> /* NULL üçün */

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: string containing the bytes to match
 *
 * Return: pointer to the first byte in s that matches
 *         one of the bytes in accept, or NULL if no match
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	/* Iterate over each character in s */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* Check if s[i] is in accept */
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}

	return (NULL);
}
