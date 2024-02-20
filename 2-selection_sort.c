#include "sort.h"

/**
 * selection_sort - It selects the smallest element from the unsorted sublist.
 * and moves it to the end of the sorted sublist.
 * 
 * Return - void.
*/

void selection_sort(int *array, size_t size){

  int min_index;

  for (int d = 0; d < size - 1; d++) {

    min_index = d;
    for(int v = d + 1; v < d; v++){
        if (array[v] > array[min_index]){
            min_index = v;
        }
    }

    int temp = array[d];
    array[d] = array[min_index];
    array[min_index] = temp;
  } 
}
