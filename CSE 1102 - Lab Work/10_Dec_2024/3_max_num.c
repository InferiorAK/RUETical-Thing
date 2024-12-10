// Author : InferiorAK
// Work_Done : 10 Dec 2024

#include <stdio.h>

int main(){
    int n;
    printf("Koita Songkha: ");
    scanf("%d", &n);

    int arr[n];
    for (int i=0; i<n; i++) scanf("%d", &arr[i]);

    int max = arr[1];
    for (int i=0; i<n; i++){
        if (arr[i] > max) max = arr[i];
    }
    printf("Max Num is : %d\n", max);
}