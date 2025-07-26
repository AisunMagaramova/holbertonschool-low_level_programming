#include <stdio.h>
#include "lists.h"
/**
 *  get_dnodeint_at_index - İsenilen indexdeki  lerin cemi qaytarir
 *  @head: siyahınıbasalngixa isare eden pointer
 *
 *   Return: cem ve ya siyahısdursa 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
