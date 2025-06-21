#include <unistd.h>

/**
 * puts2 - Prints every other character of a string
 * @str: The input string
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		/* Print the character if index is even */
		if (i % 2 == 0)
		{
			write(1, &str[i], 1);
		}
		i++;
	}

	/* Print newline */
	write(1, "\n", 1);
}
