#ifndef __MERGE__
#define __MERGE__

void print_array(const int *array, size_t size);
void merge_sort(int *array, size_t size);
void merge_section(int *array, int *tmp, int start, int end);
void merge(int *array, int *tmp, int start, int mid, int end);

#endif
