#include <stdio.h>

void BubbleSort(int arr[], unsigned int size){
    for(unsigned int i = 0; i < size; i++){
        for(unsigned int j = 0; j < size - 1; j++){
            if(arr[j+1] < arr[j]){
                int x = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = x;
            }
        }
    }
}

int main(){

    int arr[] = {4, 12, 39, 66, 1, 1, 2, 3};
    BubbleSort(arr, 8);
    for(int i = 0; i < 8; i++) printf("%i | ", arr[i]);

    return 0;
}