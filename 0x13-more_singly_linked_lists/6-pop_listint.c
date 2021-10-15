#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to head node
 * Return: head nodes data
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	if (*head == NULL)
		return (0);
	ptr = *head;
	data = ptr->n;

	*head = ptr->next;
	free(ptr);

	return (data);
}
