#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void merge_sort(int *array, size_t size)
{
	int *tmp;

	tmp = malloc(sizeof(int) * size);
	merge_section(array, tmp, 0, size);
	free(tmp);
}

void merge_section(int *array, int *tmp, int start, int end)
{
	int mid;

	if (end - start > 1)
	{
		mid = (end - start) / 2 + start;
		merge_section(array, tmp, start, mid);
		merge_section(array, tmp, mid, end);
		merge(array, tmp, start, mid, end);
	};
}

void merge(int *array, int *tmp, int start, int mid, int end)
{
	int i, j, k;

	printf("Merging...\n");
	printf("[left]: ");
	print_array(array + start, mid - start);
	printf("[right]: ");
	print_array(array + mid, end - mid);

	for (i = start, j = mid, k = 0; i < mid && j < end; k++)
		if (array[i] < array[j])
			tmp[k] = array[i++];
		else
			tmp[k] = array[j++];
	for (; i < mid;)
		tmp[k++] = array[i++];
	for (; j < end;)
		tmp[k++] = array[j++];
	for (i = start, k = 0; i < end; i++)
		array[i] = tmp[k++];

	printf("[Done]: ");
	print_array(array + start, end - start);
}
