#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * listint_len - prints all elements of a list
 * @h: pointer to linked list
 * Return: number of nodes on linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num += 1;
	h = h->next;
	}
	return (num);
}
