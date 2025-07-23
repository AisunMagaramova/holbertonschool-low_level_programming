#include <stdio.h>
#include "lists.h"

/**
 * print_list - siyahidaki butun elementleri cap edir
 * @h-gosterilen siyahinin baslangici
 * Return: siyahidaki node-larin sayi
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}

	return (count);
}
