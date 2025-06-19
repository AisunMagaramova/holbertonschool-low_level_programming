/**
 * _strlen - simlin uzunluğunu tapır
 * @s: simlin göstəricisi
 *
 * Return: simlin uzunluğunu qaytarır
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
