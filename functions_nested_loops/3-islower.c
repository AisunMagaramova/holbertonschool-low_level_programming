#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: the character to check (passed as an int)
 *
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    else
        return (0);
}
