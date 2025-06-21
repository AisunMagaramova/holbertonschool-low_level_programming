char *_strcat(char *dest, char *src)
{
    int i = 0, j = 0;

    /* dest-in sonuna get */
    while (dest[i] != '\0')
        i++;

    /* src-dən simvolları əlavə et */
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    /* sonuna null-terminator qoy */
    dest[i] = '\0';

    return dest;
}
