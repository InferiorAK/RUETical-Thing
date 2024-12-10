// Author : InferiorAK
// Work_Done : 10 Dec 2024

#include <stdio.h>

int main(){
    int n;
    printf("Koita Songkha: ");
    scanf("%d", &n);

    int arr[n];
    for (int i=0; i<n; i++) scanf("%d", &arr[i]);

    int even[n];
    int count = 0;
    for (int i=0; i<n; i++)
        if (arr[i] % 2 == 0){
            even[count] = arr[i];
            count++;
    }

    printf("Even Numbers Array : ");
    for (int i = 0; i < count; i++) printf("%d ", even[i]);
    printf("\n");
}