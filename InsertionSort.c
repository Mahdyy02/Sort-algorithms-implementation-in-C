#include <stdio.h>

void insertionSort(int arr[], unsigned int size){

    for(unsigned int i = 1; i < size; i++){

        unsigned int j = i;
        int current_value = arr[i];

        while(j > 0 && arr[j-1] > current_value){
            arr[j] = arr[j-1];
            j--;
        }

        arr[j] = current_value;

    }

}

int main(){

    int arr[] = {4, 12, 39, 66, 1, 1, 2, 3};
    insertionSort(arr, 8);
    for(int i = 0; i < 8; i++) printf("%i | ", arr[i]);

    return 0;
}