#include <unistd.h>
/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed
 */
void print_rev(char *s)
{
	int len = 0;
	int i;
	/* Find length of the string */
	while (s[len] != '\0')
	{
		len++;
	}
	/* Print characters in reverse */
	for (i = len - 1; i >= 0; i--)
	{
		write(1, &s[i], 1);
	}
	/* Print newline */
	write(1, "\n", 1);
}
