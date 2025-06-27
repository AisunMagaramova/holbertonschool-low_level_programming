#include "main.h"

/**
 * _memset - Bir yaddaş sahəsini sabit bir bayt e  doldurur
 * @s: Baslangic yaddas unvani ünvan
 * @b: Doldurulacaq bayt (simvol)
 * @n: Nece bayt doldurulacaq
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i; /* dövr ü� deyisen */

    /* 0-dan n-e qeder gedirik sonra her bayti b ile  doldururuq */
    for (i = 0; i < n; i++)
    {
        s[i] = b; /* i-ci baytı b simvolu ie doldurur */
    }

    return s; /* yaddasin baslangic unvanini qaytarir */
}
