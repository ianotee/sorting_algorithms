#include "sort.h"

/**
* bubble_sort - sorts an array.
* @array: int param.
* @size: size.
*/

void bubble_sort(int *array, size_t size)
{
	size_t n, m, q;

	for (n = 0; n < size - 1; n++)
	{
		for (m = 0; m < size -n - 1; m++)
		{
			if (array[m] > array[m + 1])
			{
				int tep = array[m];

				array[m] = array[m + 1];
				array[m + 1] = tep;
				for (q = 0; q < size; q++)
				{
					printf("%d ", array[q]);
				}
				printf("\n");
			}
		}
	}
}
