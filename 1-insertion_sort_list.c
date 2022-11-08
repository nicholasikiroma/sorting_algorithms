#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm
 * 
 * @list: doubly linked list to be sorted
 * Return: nothing
 */

void insertion_sort_list(listint_t **list)
{
    listint_t *first_ptr, *tmp_ptr;

    if (list == NULL || *list == NULL)
        return;

    first_ptr = (*list)->next;
    while (first_ptr != NULL)
    {
        tmp_ptr = first_ptr->next;
        while (first_ptr->prev != NULL && first_ptr->prev->n > first_ptr->n)
        {
            first_ptr->prev->next = first_ptr->next;
            if (first_ptr->next != NULL)
                first_ptr->next->prev = first_ptr->prev;
            first_ptr->next = first_ptr->prev;
            first_ptr->prev = first_ptr->next->prev;
            first_ptr->next->prev = first_ptr;

            if (first_ptr->prev == NULL)
                *list = first_ptr;
            else
                first_ptr->prev->next = first_ptr;
            print_list(*list);
        }
        first_ptr = tmp_ptr;
    }

}
