#include "operations.h"
#include <stdio.h>

void printer_arrays(int array[], int lenght){
    int i;
    for(i=0; i<lenght; i++){
        printf("\nCella numero %d - valore %d", i, array[i]);
    }
    printf("\n");
}

