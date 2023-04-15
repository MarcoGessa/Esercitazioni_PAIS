#include "operations.h"

void insertion_sort_upper(int array[], int lenght){
    int i, key, compare;
    for(i=0; i<lenght; i++){
        key = array[i];
        compare = i-1;
        while(compare>=0 && array[compare]>key){
            array[compare+1] = array[compare];
            compare = compare -1;
        }
        array[compare+1] = key;
    }
}







void insertion_sort_downer(int array[], int lenght){
    int compare, key, i;
    for(i=0; i<lenght; i++){
        key = array[i];
        compare = i-1;
        while(compare>=0 && array[compare]<key){
            array[compare+1] = array[compare];
            compare = compare-1;
        }
        array[compare+1] = key;
    }

}

void bubble_sort(int array[], int lenght){
    int i, j, save_cell;
    for(i=0; i<lenght; i++){
        for(j=0; j<lenght-1; j++){
            if(array[j+1]<array[j]){
                save_cell = array[j];
                array[j] = array[j+1];
                array[j+1] = save_cell;
            }
        }
    }
}


void merge_sort(int array[], int p, int r){
    int q;
    if(p<r){
        q=(p+r)/2;
        merge_sort(array, p, q);
        merge_sort(array, q+1, r);
        merge(array, p, q, r);
    }
}

void merge(int array[], int p, int q, int r){
    int i;
    int i_left, i_right;

    int lenght_left=q-p+1;
    int lenght_right=r-q;

    int v_left[lenght_left];
    int v_right[lenght_right];

    for(i=0; i<lenght_left; i++){
        v_left[i] = array[p+i];
    }
    for(i=0; i<lenght_right; i++){
        v_right[i] = array[q+i+1];
    }

    i_left=0;
    i_right=0;
    i=p;

    do{
        if(v_left[i_left] < v_right[i_right]){
            array[i] = v_left[i_left];
            i++; i_left++;
        }
        else{
            array[i] = v_right[i_right];
            i++; i_right++;
        }
    }while(i_left<lenght_left);

    while(i_left<lenght_left && i_right<lenght_right){
        array[i] = v_left[i_left];
        i++; i_left++;
    }
    while(i_right<lenght_right){
        array[i] = v_right[i_right];
        i++; i_right++;
    }

}


void max_heap(int array[], int min, int end){
    int i;
    for(i=end/2; i>=min; i--){
        max_heapify(array, i, end);
    }
}

void max_heapify(int array[], int f, int size){
    int max=f, l=f*2, r=f*2+1, t;
    if(l<=size && array[l]>array[max]){
        max=l;
    }
    if(r<=size && array[r]>array[max]){
        max=r;
    }
    if(f!=max){
        t = array[f];
        array[f] = array[max];
        array[max] = t;
        max_heapify(array, max, size);
    }
}

void heap_sort(int array[], int size){
    int i, t;
    for(i=size; i>=2; i--){
        t = array[1];
        array[1] = array[i];
        array[i] = t;
        max_heapify(array, 1, i-1);
    }
}