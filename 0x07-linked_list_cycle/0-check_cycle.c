#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * check_cycle - check if single list is a cycle.
 * @list: list to check
 * Return: Return 1 if cycle, 0 otherwise. 
 */

int check_cycle(listint_t *list){
	listint_t *node , *curr = list;

	if (list->next == NULL || list == NULL)
		return (0);

	while(curr->next){
		node = curr->next;
		while (node->next){
			if (node == list || node == curr){
				return (1);
			}

			node = node->next;
		}
		curr = curr->next;
	}

	return (0);
}
