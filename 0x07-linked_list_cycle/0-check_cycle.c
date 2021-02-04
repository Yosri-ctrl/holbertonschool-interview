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
	listint_t *node = list, *curr = list;

	if (list->next == NULL || list == NULL)
		return (0);

	while(curr && node && node->next){
		node = node->next->next;
		curr = curr->next;

		if (node == curr){
				return (1);
		}
	}

	return (0);
}
