#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * _strlen - setirin uzunlgnu hesablay
 * @s: string pointer
 * Return: setirin uzunlugu
 */
unsigned int _strlen(const char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
/**
 * add_node - siyahinin evveline yeni node elave edir
 * @head: siyahinin baslangicina isare eden pointerin unvani
 * @str: elave edilecek setrin sureti
 *
 * Return: yeni node-un unvani, yaddas catmazsa NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

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
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
