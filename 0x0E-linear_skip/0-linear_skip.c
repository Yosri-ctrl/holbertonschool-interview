#include "search.h"
/**
 * linear_skip - search for vlue in the skip-list
 * @list: the list to search in
 * @value: the value to look for
 * Return: the node of the value
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node = NULL, *prev = NULL, *next = NULL;

	//printf("value = %d\n", value);
	if (list == NULL || value == 0)
		return (NULL);
	node = list;
	prev = list;
	next = list->express;
	while (next)
	{
		printf("Value checked at index [%ld] = [%d]\n", next->index, next->n);
		if (next->n >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
				   node->index, next->index);
			break;
		}
		node = node->express;
		next = next->express;
	}
	if (node->express == NULL)
	{
		prev = node;
		while (prev->next)
			prev = prev->next;
		printf("Value found between indexes [%lu] and [%lu]\n",
			   node->index, prev->index);
	}
	prev = node;
	while (prev != node->express)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			break;
		prev = prev->next;
	}
	if (prev != node->express)
		return (prev);
	return (NULL);
}
