#include <stdio.h>

/**
 * main - prints the program's name
 * @argc: argument count (unused)
 * @argv: argument vector (argv[0] is program name)
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc; /* argc istifadə olunmur, amma silmək olmaz */
	printf("%s\n", argv[0]);
	return (0);
}
