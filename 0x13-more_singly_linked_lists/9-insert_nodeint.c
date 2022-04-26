/**
 * insert_nodeint_at_index - A function that
 * inserts a new node at a given position
 * @head: pointer to head parameter
 * @idx: index parameter
 * @n: parameter for n int the new node
 * Return: pointer to the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *newNode;

	register uint i;

	newNode = malloc(sizeof(listint_t));
	if (!head || !newNode)
		return (NULL);
	newNode->n = n;
	if (!idx)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	current = *head;
	while (current)
	{
		if (i == idx - 1)
		{
			newNode->next = current->next;
			current->next = newNode;
			return (newNode);
		}
		i++;
		current = current->next;
	}
	free(newNode);
	return (NULL);
}
