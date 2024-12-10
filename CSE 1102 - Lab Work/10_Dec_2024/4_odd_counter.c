// Author : InferiorAK
// Work_Done : 10 Dec 2024

#include <stdio.h>

int main(){
    int n;
    printf("Koita Songkha: ");
    scanf("%d", &n);

    int arr[n];
    for (int i=0; i<n; i++) scanf("%d", &arr[i]);

    int count = 0;
    for (int i=0; i<n; i++) if (arr[i] % 2 != 0) count++;
    printf("Total Odds : %d\n", count);
}