#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - siyahinin evveline yeni node elace edir
 *  @head: siyahinin basina isare eden pointerin unvani
 *  @n: yeni node ucun integer deyeri
 *
 *  Return: yeni node unvani
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
