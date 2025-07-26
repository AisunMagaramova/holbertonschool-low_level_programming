#include <stdio.h>
#include "lists.h"
/**
 *  get_dnodeint_at_index - İsenilen indexdeki node qaytarir
 *  @head: siyahının slangivi
 *  @index: istenilen node nomresi
 *
 *   Return: tapılan node-un pointeri e ya NULL
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

