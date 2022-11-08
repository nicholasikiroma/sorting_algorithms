#include "sort.h"

/**
 * swap - Swaps two elements
 * 
 * @first: value to be swapped 
 * @next: value to be swapped
 */


void swap(int *first, int *next)
{
    int tmp = *first;
    *first = *next;
    *next = tmp;
}


/**
 * selection_sort - sorts an array of integers in ascending order using the Selection sort algorithm
 * @array: unsorted array
 * @size: length of the array
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
    unsigned int i, j, min_index;

    for(i = 0; i < size - 1; i++)
    {
        min_index = i;
        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[min_index])
                min_index = j;
            
            if (min_index != i)
            {
                swap(&array[min_index], &array[i]);
                print_array(array, size);
            }
        }
    }
}
