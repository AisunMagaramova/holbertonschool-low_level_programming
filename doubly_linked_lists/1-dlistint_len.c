#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len  - doble linked list deki node larin sayini qaytarir
 * @h: ilk node isare edir
 *
 * Return: siyahidaki nodelarin sayi
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
