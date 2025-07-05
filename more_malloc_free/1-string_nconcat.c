#include <stdlib.h>

/**
 * _strlen - returns length of string
 * @s: string pointer
 *
 * Return: length of string (number of chars before '\0')
 */
unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string (can be NULL)
 * @s2: second string (can be NULL)
 * @n: maximum number of bytes to use from s2
 *
 * Return: pointer to newly allocated concatenated string,
 *         or NULL if malloc fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		n = len2;

	result = malloc(len1 + n + 1);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (j = 0; j < n; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}
