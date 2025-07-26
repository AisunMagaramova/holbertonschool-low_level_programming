#include <stdio.h>
#include "lists.h"
/**
 *  sum_dlistint - İsenilen indexdei  lerin cemi qaytari
 *  @head: siyahınıbasalngixa isare eden poi
 *
 *   Return: cem ve ya siyah� bosdursa 0
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
