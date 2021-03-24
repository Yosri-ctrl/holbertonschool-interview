#include "binary_trees.h"

/**
 * sorted_array_to_avl - Convert array to avl tree
 * @arrat: array to Convert
 * @size: size of the array
 * Return: the head of the new linked list
 */
avl_t *sorted_array_to_avl(int *array, size_t size)
{
	avl_t *new;

	new = array_to_avl(array, 0, size - 1, NULL);

	return (new);
}
/**
 * array_to_avl - Reccursive function for convertion
 * @array: array to convert 
 * @start: the first index of sub-array to treat
 * @size: the last index of arry to treat
 * @parent: the previous node
 * Return: the new tree
 */
avl_t *array_to_avl(int *array, size_t start, size_t size, avl_t *parent)
{
	if (start > size)
		return NULL;
	size_t mid;
	avl_t *new;

	mid = (start + size) / 2;
	new = (avl_t *)malloc(sizeof(avl_t));
	if (new == NULL)
		return NULL;
	new->n = array[mid];
	new->parent = parent;

	if (mid != size)
		new->left = array_to_avl(array, start, mid - 1, new);
	new->right = array_to_avl(array, mid + 1, size, new);

	return new;
}
