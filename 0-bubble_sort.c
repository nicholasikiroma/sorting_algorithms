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
 * bubble_sort - sorts an array of integers in ascending order using the Bubble sort algorithm
 * @array: Unsorted array
 * @size: length of the array
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
    unsigned int i, j;

    for (i= 0; i < size - 1; i++)
    {
        for (j= 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j+1])
            {
                swap(&array[j], &array[j + 1]);
                print_array(array, size);
            }
        }
    }
}
