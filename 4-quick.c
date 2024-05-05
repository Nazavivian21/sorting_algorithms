#include "sort.h"
/**
 * swap - swap function
 * @p1: position 1
 * @p2: position 2
 * Return: nothing
 */
void swap(int* p1, int* p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
/**
 * partition - array partition
 * @array: array input
 * @low: first position
 * @high: last position
 * @size: array size
 * Return: pivot index
 */
int partition(int array[], int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j;

	for ( j = low; j <= pivot; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			print_array(array, size);
		}
	}
	swap(&array[i + 1], &array[high]);

	return (i + 1);
}
/**
 * quick - quick sort function
 * @array: array
 * @size: array size
 * @low: first position
 * @high: last position
 * @Return: void
 */
void quick(int *array, int low, int high, size_t size)
{
	int pi;

	if (low < high)
	{
		pi = partition(array, low, high, size);
		quick(array, low, pi - 1, size);
		quick(array, pi + 1, high, size);
	}
}
/**
 * quick_sort - sorts an array of integers using the Quick
 * sort algorithm in ascending order
 * @array: array to sort
 * @size: array size
 */
void quick_sort(int *array, size_t size)
{
	quick(array, 0, size - 1, size);
}
