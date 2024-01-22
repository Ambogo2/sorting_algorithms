#include "sort.h"

/**
 * _swap - swaps the values of two integers
 * @a:integer to swap
 * @b:integer to swap
 */
void _swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array:array to be sorted.
 * @size:size of the array
*/

void selection_sort(int *array, size_t size)
{
	unsigned int min, i, j;

	for (i = 0; i < size - 1; i++)
	{
		min = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
			if (min != i)
			{
				_swap(&array[i], &array[min]);

				print_array(array, size);
			}

		}

	}

}
