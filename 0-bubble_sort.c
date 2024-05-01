#include "sort.h"
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
/**
 * bubble_sort - sorts integers in array using bubble sort.
 * Description: sorts integers in array by their values using bubble sort
 * @array: the array to sort.
 * @size: the size of the array being sorted.
 * Return: void
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp; /*Size_t for looping and storing integers*/
	int swap_num;

	swap_num = 0;

	if (array == NULL)
	{
		;
	}
	else
	{
		for (i = 0; i < size - 1; i++) /*Outer loop, loops through the array*/
		{
			swap_num = 0;
			for (j = 0; j < size - 1; j++) /*Inner loop, for comparison*/
			{
				if (array[j] > array[j + 1])
				{
					temp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = temp;
					swap_num = swap_num + 1;
					print_array(array, size);
				}
			}
			if (swap_num == 0)
			{
				break;
			}
		}
	}
}
