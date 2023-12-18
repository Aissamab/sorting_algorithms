#include "sort.h"

/**
*swap - the positions of two elements into an array
*@array: array
*@a: array element
*@b: array element
*/
void swap(int *array, int a, int b)
{

	int tmp;

	tmp = array[a];
	array[a] = array[b];
	array[b] = tmp;
}
/**
 * shell_sort - function that sorts an array of integers in ascending
 * order using the Shell sort algorithm, using the Knuth sequence
 * @size: size of the array
 * @array: list with numbers
 */
void shell_sort(int *array, size_t size)
{
	size_t n = 1, i, index = 0;

	if (array == NULL || size < 2)
		return;
	while (n < size / 3)
		n = 3 * n + 1;
	while (n >= 1)
	{
		for (i = n; i < size; i++)
			for (index = i; index >= n &&
			 (array[index] < array[index - n]); index -= n)
				swap(array, index, index - n);
		print_array(array, size);
		n /= 3;
	}
}
