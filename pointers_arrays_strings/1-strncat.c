/**
 * _strncat - appends at most n bytes of src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to append
 *
 * Return: pointer to dest
 */
char	*_strncat(char *dest, char *src, int n)
{
	int	i = 0;
	int	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
