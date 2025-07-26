#include <stdlib.h>
#include "lists.h"
/**
 * free_list - list_t de olan baglantili siyahini azad edir
 * @head: siyahinin ilk node- isare edir
 *
 * Return: hec ne qaytarmir
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temo;
	}
}
