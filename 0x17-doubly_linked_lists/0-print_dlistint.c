#include "lists.h"
/**
 * print_dlistint - a function that prints all elements of a dlistint_t
 * @h: pointer to the first node
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int num_of_node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_of_node++;
	}
	return (num_of_node);
}
