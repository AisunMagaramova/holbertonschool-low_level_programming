#include <stddef.h> /* NULL üçün */

/**
 * _strstr - locates a substring in a string
 * @haystack: əsas string (böyük mətn)
 * @needle: axtarılan substring
 *
 * Return: pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	/* egerr needleosdursa, haystack qaytar */
	if (needle[0] == '\0')
		return (haystack);

	/* Haystack boyunca yoxla */
	for (i = 0; haystack[i] != '\0'; i++)
	{
		/* her movqeden baaslayaraq  yoxla */
		for (j = 0; needle[j] != '\0'; j++)
		{
			/* eger uygun gelmirse dovru qir  */
			if (haystack[i + j] != needle[j])
				break;
		}

		/* eegerr tam needle uygun gelirse, o hisseye pointer qaytar */
		if (needle[j] == '\0')
			return (&haystack[i]);
	}

	/* eger uygunluq yoxdursa, NULL qaytar */
	return (NULL);
}
