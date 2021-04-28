#include "search_algos.h"

/**
 * 
 * 
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;
	size_t start = 0, end = size - 1;

	index = recursive(array, start, end, value);
	return (index);
}

/**
 * 
 * 
 */
int recursive(int *array, size_t start, size_t end, int value)
{
	size_t i;
	size_t mid = start + ((end - start) / 2);

	printf("Searching in array: ");
	for (i = start; i < end; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);

	if (end == start)
		return (-1);
	if (array[mid] == value && array[mid - 1] != value)
		return (mid);
	if (array[mid] >= value)
		return recursive(array, start, mid, value);
	return recursive(array, mid + 1, end, value);
}
