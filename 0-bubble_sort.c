#include "sort.h"

/**
 * swap - Swaps two integers in an array.
 * @a: Pointer to the first integer to swap.
 * @b: Pointer to the second integer to swap.
 */
void swap(int *a, int *b)
{
        int temp;

        temp = *a;
        *a = *b;
        *b = temp;
}

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Return: Void
 */
void bubble_sort(int *array, size_t size)
{
        size_t i, len = size;
        int swapped;

        if (array == NULL || size < 2)
                return;

        do {
                swapped = 0;
                for (i = 0; i < len - 1; i++)
                {
                        if (array[i] > array[i + 1])
                        {
                                swap(&array[i], &array[i + 1]);
                                print_array(array, size);
                                swapped = 1;
                        }
                }
                len--;
        } while (swapped);
}

