#include "sort.h"
/**
 * bubble_sort -  sorts an array of integers in ascending order
 * @array: array
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{

	int tmp;
	size_t i, index;

	if (!size || !array)
		return;
	i = 0;
	while (i < size)
	{
		for (index = 0; index < size - 1; index++)
		{
			if (array[index] > array[index + 1])
			{
				tmp = array[index];
				array[index] = array[index + 1];
				array[index + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
