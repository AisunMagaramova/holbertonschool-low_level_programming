#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - doubly linked listdeki butun nodelari azad edir
 *  @head: siyahınınaslangicina isare eden pointer
 *
 *  Return: hec ne qayitmir voiddi deye
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
