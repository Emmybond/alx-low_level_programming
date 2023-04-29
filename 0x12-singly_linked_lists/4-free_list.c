#include <stdlib.h>
#include "lists.h"

/**
 * free_list - It implies free a linked list
 * @head: It represents list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

