#include <stddef.h>
#include "lists.h"
/**
 * list_len- linked listdeki elementlerin sayini sayir
 * @head: siyahinin ilk node nuna isare eden pointer
 *
 * Return: siyahidaki node-larin sayi
 */
size_t list_len(const list_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		count++;
		head = head->next;
	}

	return (count);
}
