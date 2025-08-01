#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - double linked list in butun elementlerini cap edir
 * @h: ilk node isare eden pointer
 *
 * Return: nodelarin sayi
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
