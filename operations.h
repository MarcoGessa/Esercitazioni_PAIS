//
// Created by Marco Gessa on 11/04/23.
//

#ifndef MIX_PAIS_OPERATIONS_H
#define MIX_PAIS_OPERATIONS_H

void insertion_sort_upper(int array[], int lenght);
void insertion_sort_downer(int array[], int lenght);
void bubble_sort(int array[], int lenght);
void merge_sort(int array[], int p, int r);
void merge(int array[], int p, int q, int r);

void max_heapify(int array[], int f, int size);
void max_heap(int array[], int min, int end);
void heap_sort(int array[], int size);
#endif //MIX_PAIS_OPERATIONS_H
