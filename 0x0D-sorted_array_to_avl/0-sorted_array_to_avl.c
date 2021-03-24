#include "binary_trees.h"
#include "unistd.h"
/**
 * 
 * 
 */
avl_t *sorted_array_to_avl(int *array, size_t size)
{
	avl_t *new;

	new = array_to_avl(array, 0, size - 1, NULL);

	return (new);
}
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
	new->left = NULL;
	new->right = NULL;

	//sleep(1);
	//printf("sta = %ld, mid = %ld, end = %ld\n", start, mid, size);

	new->parent = parent;
	if (mid != size)
		new->left = array_to_avl(array, start, mid - 1, new);
	new->right = array_to_avl(array, mid + 1, size, new);

	return new;
}
