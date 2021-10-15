#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_listint - prints all elements of a list
 * @h: pointer to linked list
 * Return: number of nodes on linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
	num += 1;
	h = h->next;
	}
	return (num);
}
