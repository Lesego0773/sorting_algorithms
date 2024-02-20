#include "sort.h"


/**
 * @size - size of the array
 * @bubble_sort - The function compares adjustments elements and swaps the to ascending order
 * Return - Void
*/

void bubble_sort(int *array, size_t size){

    for (int i = 0; i < size - 1; i++)
    {
         for (int x = 0; x < size - i - 1; x++)
         {
            if(array[x] > array[x+1]){
                int temp = array[x];
                array[x] = array[x+1];
                array[x+1] = temp;
            }
            
         }
         
    }
    
}
