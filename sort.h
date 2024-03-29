#ifndef SORT_H
#define SORT_H
#include <stddef.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;


/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list);

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(int *array, size_t size);



/*Bubble sort*/
void bubble_sort(int *array, size_t size);

/*Insertion sort*/
void insertion_sort_list(listint_t **list);

/*Selection sort*/
void selection_sort(int *array, size_t size);

/*Quick sort*/
void quick_sort(int *array, size_t size);

int lomuto_partition(int *array, int low, int high, int size);
void swap(int *a, int *b);

#endif
