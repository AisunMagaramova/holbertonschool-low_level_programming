#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - doble linked liste sonuna yeni dode elave edir
 * @head: isarenin basina isare eden pointerin unvanu
 * @n: yeni node ucun daxil edilecek reqem
 *
 * Retur: yeni nude unvanu, ugursuz ilarsa NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
       	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head ==NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while(temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;
	new_node->prev = temp;

	return (new_node);
}
