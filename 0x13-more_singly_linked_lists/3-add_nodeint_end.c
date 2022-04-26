#include "lists.h"

/**
 * add_nodeint_end - Add's a new node to the last node
 * @head: pointer to the head
 * @n: int element parameter
 * Return: NUll or address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *current;

	if (!head || !newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (!*head)
		*head = newNode;
	else
	{
		current = *head;
		while (current->next)
			current = current->next;
		current->next = newNode;
	}
	return (newNode);
}
