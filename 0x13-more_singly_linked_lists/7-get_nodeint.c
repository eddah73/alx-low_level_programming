#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - get the nth node of a linked list
 * @head: pointer to node
 * @index: nth node
 * Return: nth node or NULL if failed
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (i < index && head != NULL)
	{
		head = head->next;
		i++;
	}
	if (i == index)
		return (head);

	return (NULL);
}
