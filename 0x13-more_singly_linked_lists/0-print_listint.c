#include "lists.h"

/**
 * print_listint - a function that lists all elements of the linked list
 * @h: header pointer param
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t count;
if (h == NULL)
return (0);

count = 0;
while (h != NULL)
{
printf("%d\n", h->n);
count++;
h = h->next;
}
return (count);
}
