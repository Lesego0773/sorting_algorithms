#include "sort.h"

/**
 * selection_sort - Sorts an array of integers using selection sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 */
void selection_sort(int *array, size_t size)
{
    size_t d, v;
    int min_index;

    if (!array || size < 2)
        return;

    for (d = 0; d < size - 1; d++)
    {
        min_index = d;

        for (v = d + 1; v < size; v++)
        {
            if (array[v] < array[min_index])
            {
                min_index = v;
            }
        }

        /* Explicitly cast min_index to size_t */
        if ((size_t)min_index != d)
        {
            int temp = array[d];
            array[d] = array[min_index];
            array[min_index] = temp;
            print_array(array, size);
        }
    }
}

