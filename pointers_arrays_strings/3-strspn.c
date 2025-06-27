#include "main.h"
#include <stddef.h>
/**
 * _strspn - returns the length of the initial segment of s
 *           which consists only of bytes from accept
 * @s: string to be scanned
 * @accept: string containing the characters to match
 *
 * Return: number of bytes in the initial segment of s
 *         consisting only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int i, j;
	int found;

	/* Loop through each character of s */
	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0; /* tapılmayıhele */

		/* Check if current character s[i] is in accept */
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1; /* Character found in accept */
				break;
			}
		}

		if (found == 0) /* If character not found, stop counting */
			break;

		count++; /* Increment count for each matching character */
	}

	return (count);
}
