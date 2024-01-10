#include <stdio.h>
#include <stdlib.h>

unsigned int minimum(int *arr, unsigned int start_index, unsigned int end_index){

    if (start_index == end_index) return start_index; 

    unsigned int min_index = start_index;
    int min = arr[start_index];

    for(unsigned int i = start_index + 1; i <= end_index; i++){
        if(arr[i] < min){
            min = arr[i];
            min_index = i;
        }
    }

    return min_index;
}

void selectionSort(int *arr, unsigned int size){ 

    unsigned int start_index = 0;
    unsigned end_index = size - 1;
    unsigned min_index;

    while(start_index < end_index){

        min_index = minimum(arr, start_index, end_index);

        int x = arr[min_index];
        arr[min_index] = arr[start_index];
        arr[start_index] = x;

        start_index++;
    }

}

int main(){

    int arr[] = {4, 12, 39, 66, 1, 1, 2, 3};
    selectionSort(arr, 8);
    for(int i = 0; i < 8; i++) printf("%i | ", arr[i]);

    return 0;
}