#include "lists.h"

/**
 * listint_len - a function that returns a number of elements
 * in a linked list
 * @h: header pointer param
 * Return: size_t (the number of elements in a linked list)
 */

size_t listint_len(const listint_t *h)
{
size_t count;
if (h == NULL)
return (0);
count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
