#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a linked list
 * @head: pointer to head node
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		ptr = *head;
		*head = ptr->next;
		free(ptr);
	}
}
