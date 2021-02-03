#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * check_cycle - check if single list is a cycle.
 *
 * Return: Return 1 if cycle, 1 otherwise. 
 */

int check_cycle(listint_t *list){
	listint_t *node = list->next;

	while (node->next != NULL){
		if (node == list){
			return (1);
		}
		node = node->next;
	}

	return (0);
}