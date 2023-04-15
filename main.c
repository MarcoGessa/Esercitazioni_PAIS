#include "structure_and_operations.h"
#include "operations.h"
#include "printer_arrays.h"

int main() {

    int array[] = {1,4,3,-9,0,8};
    int lenght = sizeof (array)/ sizeof (int);

    insertion_sort_upper(array, lenght);
    printer_arrays(array, lenght);
    insertion_sort_downer(array, lenght);
    printer_arrays(array, lenght);

    bubble_sort(array, lenght);
    printer_arrays(array, lenght);

    merge_sort(array, 0, lenght-1);
    printer_arrays(array, lenght);


    max_heap(array, 1, lenght-1);
    heap_sort(array, lenght-1);
    printer_arrays(array, lenght);



    insert_values();
    calcolo();
    stampa_struttura();
    //ma();

    return 0;
 }
