#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * is_palindrome - checks if a singly linked list is a palindrome.
 *
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */

int is_palindrome(listint_t **head)
{
	int *arr;
	int i = 0, len = 0, j;
	listint_t *node = *head;

	while (node->next)
	{
		len++;
		node = node->next;
	}

	arr = malloc(sizeof(int) * len+ 1);
	node = *head;
	while (node->next)
	{
		arr[i] = node->n;
		i++;
		node = node->next;
	}
	arr[i] = node->n;
	
	/*for (i=0;i<=len;i++)
	{
		printf("ar[%d]=%d\n", i, arr[i]);
	}*/

	for (i = 0, j = len; i <= len / 2; i++, j--)
	{
		/*printf("arr[i] = %d\n arr[j] = %d\n", arr[i], arr[j]);*/
		if (arr[i] != arr[j])
			return (0);
	}
	free(arr);
	return (1);
}
