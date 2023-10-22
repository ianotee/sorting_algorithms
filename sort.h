#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



/**
 * struct listint_s - List.
 * @n: Integer.
 * @prev: Pointer.
 * @next: Pointer to next node.
 */


typedef struct listint_s
{
        const int n;
        struct listint_s *prev;
        struct listint_s *next;
} listint_t;


void selection_sort(int *array, size_t size);
void bubble_sort(int *array, size_t size);

#endif
