#include "lists.h"
#include <stdio.h>
/**
 *  get_dnodeint_at_index - istenilen indexdeki nodeu qaytarrir
 *   @head: siyahınıbaslangici
 *   @index: istenilen nodeun nomresi
 *
 *   Return: tapılan node-un pointeri e  ya NUL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;
	}

	return (NULL);
}
