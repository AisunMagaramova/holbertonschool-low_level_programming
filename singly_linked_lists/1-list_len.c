#include <stddef.h>
#include "lists.h"
/**
 * list_len: linked listdeki elementlerin sayini sayir
 * @head: siyahinin ilk node nuna isare eden pointer
 *
 * return: siyahidaki node-larin sayi
 */
size_t list_len(const list_t *head)
{
	size_t count = 0;
	/* linked list boyunca her node ucun dovur edirik*/
	while (head != NULL)
	{
		count++;/*her bir node ucun say artiririq */
		head = head->next;/* novbeti node kecirik */
	}
	return (count);
}
