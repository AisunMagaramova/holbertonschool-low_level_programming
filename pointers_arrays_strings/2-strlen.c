/**
 * _strlen - simlin uzunluğunu tapır
 * @s: simlin götericisi
 *
 * Return: length of the string (number of characters before '\0')
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
 }
