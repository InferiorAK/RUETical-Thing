// Author : InferiorAK
// Work_Done : 10 Dec 2024

#include <stdio.h>

int main(){
    int n;
    printf("Enter the Number of Elements: ");
    scanf("%d", &n);

    int arr[n];
    for (int i=0; i<n; i++) scanf("%d", &arr[i]);

    for (int i=n; i>0; i--) printf("Element[%d]: %d\n", i, arr[i-1]);
}