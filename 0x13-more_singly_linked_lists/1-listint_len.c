#include "lists.h"
#include <stdio.h>
/**
*listint_len - returns the no of elements
*in a linked listint_t list
*@h: pointer to the head of listint_t list
*Return: returns the number of elements in the list
*/
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
