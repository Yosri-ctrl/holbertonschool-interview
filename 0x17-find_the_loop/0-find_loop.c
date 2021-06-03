#include "lists.h"
/**
 * find_listint_loop - find a loop in a single list
 * @head: the head of the list
 * Return: first node where the loop starts || NULL
 * if no loop exist
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *curr = head->next;
	listint_t *node = head->next->next;

	while (curr && node)
	{
		if (curr == node)
		{
			curr = head;
			while (curr != node)
			{
				curr = curr->next;
				node = node->next;
			}
			return (node);
		}
		curr = curr->next;
		node = node->next->next;
	}
	return (NULL);
}
