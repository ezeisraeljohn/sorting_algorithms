#include "sort.h"

/**
 * bubble_sort - Function that sorts an array using the bubble sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 *
 * Description: The function uses the bubble sort algorithm that swaps adjacent
 * values of an array till the last element of the element of the array
 * contains the greatest number of the array.
 * This will be repeated till all the numbers are correctly sorted in ascending
 * order.
 *
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t swapped = 0, i, j;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		if (swapped == 0)
		{
			swapped = 1;

			for (j = 0; j < size - i - 1; j++)
			{
				if (array[j] >= array[j + 1])
				{
					swap(array, j);
					print_array((const int *)array, size);
					swapped = 0;
				}

			}
		}
		else
		{
			break;
		}

	}
}

/**
 * swap - Function that swaps element of an array
 * @array: The array in consideration
 * @position: The second element
 *
 * Description: It takes the @array, and @position and then swaps the next
 * element of the array with the previous one
 *
 * Return Nothing
*/

void swap(int *array, size_t position)
{
	int c;

	c = array[position + 1];
	array[position + 1] = array[position];
	array[position] = c;

}
