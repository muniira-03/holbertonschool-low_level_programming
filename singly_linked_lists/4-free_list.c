#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t linked list
 * @head: Pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next; /* Store the next node */
		free(head->str);   /* Free the duplicated string */
		free(head);        /* Free the current node */
		head = temp;       /* Move to the next node */
	}
}
