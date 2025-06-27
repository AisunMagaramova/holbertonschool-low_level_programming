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
    unsigned int count = 0;
    int i, j;
    int found;

    for (i = 0; s[i] != '\0'; i++)
    {
        found = 0; /*tapilmayib hele*/
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
            {
                found = 1; /*tapildi*/
                break;
            }
        }
        if (found == 0) /*s[i] accepde yoxdur*/
            break;
        count++;
    }
    return count;
}
