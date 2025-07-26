#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * _strlen - setrin uzunlugu
 * @s: string pointer
 *
 * Return: setrin uzunlugu
 */
unsigned int _strlen(const char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
/**
 * add_node_end - linked listin sonuna yeni node elave edir
 * @head: list-in baslangicina isare eden pointerin unvani
 * @str: elave olunacaq setirlerin unvani
 *
 * Return: yeni yaradilmis node-un unvani
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new_node;
	}

	return (new_node);
}
