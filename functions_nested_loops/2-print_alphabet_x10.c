#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase,
 * followed by a new line each time
 */
void print_alphabet_x10(void)
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
    int line, i;

    for (line = 0; line < 10; line++)
    {
        i = 0;
        while (alphabet[i] != '\0')
        {
            _putchar(alphabet[i]);
            i++;
        }
    }
}
