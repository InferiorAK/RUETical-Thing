// Author : InferiorAK
// Solved : 01 Feb 2025

#include <stdio.h>

int getMax(int arr[]){
    int max = arr[0];

    for (int i = 0; arr[i] != '\0'; i++)
        if (arr[i] > max) max = arr[i];

    return max;
}

int main(){
    int arr[6] = {10, 5, 99, 55, 20};
    int max = getMax(arr);
    printf("Largest Element: %d\n", max);

    return 0;
}