#include "sort.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void heap(int *array, int size, int a, size_t len)
{
	int max = a;
	int left = a * 2 + 1;
	int right = a * 2 + 2;

	if (left < size && array[left] > array[max])
		max = left;

	if (right < size && array[right] > array[max])
		max = right;

	if (max != a)
	{
		swap(&array[a], &array[max]);
		print_array(array, len);
		heap(array, size, max, len);
	}
}

void heap_sort(int *array, size_t size)
{
	int i;

	if (!size || !array)
		return;
	for (i = size / 2 - 1; i >= 0; i--)
		heap(array, size, i, size);

	for (i = size - 1; i > 0; i--)
	{
		if (array[0] >= array[i])
		{
			swap(&array[0], &array[i]);
			print_array(array, size);
		}
		heap(array, i, 0, size);
	}
}
