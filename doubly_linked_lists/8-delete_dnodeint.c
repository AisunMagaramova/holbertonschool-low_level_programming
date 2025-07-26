#include  "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - dlistint_t linked liste node silir
 * @head: linked list-in baslangicini gosteren pointer
 * @index: silinecek node indexi
 *
 *  Return: ugulurdursa 1, ugursuzdusa -1 qaytarire
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	while (temp && i < index)
	 {
		 temp = temp->next;
		 i++;
	 }

	 if (!temp)
		  return (-1);
       
	 if (temp->prev)
		 temp->prev->next = temp->next;
	 else
		 *head = temp->next;


	 if (temp->next)
		 temp->next->prev = temp->prev;
	 
	 free(temp);
	 
	 return (1);
