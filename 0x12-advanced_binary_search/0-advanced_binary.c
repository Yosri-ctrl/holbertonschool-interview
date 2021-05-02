#include "search_algos.h"

/**
 *advanced_binary - binary search in list with duplicated values
 *@array: the array to treat
 *@size: the size of the array
 *@value: the value to look for
 *Return: the index of value in array
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;
	size_t start = 0, end = size - 1;

	if (array == NULL)
		return (-1);
	index = recursive(array, start, end, value);
	return (index);
}

/**
 *recursive - binary search using recursive method
 *@array: the list to treat
 *@start: the first index
 *@end: the last index
 *@value: the value to look for
 *Return: index of the first value in array
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
		return (recursive(array, start, mid, value));
	return (recursive(array, mid + 1, end, value));
}
