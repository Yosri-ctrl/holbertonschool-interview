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
	listint_t *node = list->next;

	if (list->next == NULL || list == NULL)
		return (0);
	while (node->next != NULL){
		if (node == list){
			return (1);
		}
		node = node->next;
	}
	return (0);
}