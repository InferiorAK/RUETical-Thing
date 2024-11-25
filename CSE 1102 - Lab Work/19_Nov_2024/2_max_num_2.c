// Author : InferiorAK
// Work_Done : 19 Nov 2024

#include <stdio.h>

int main(){
    int N;
    printf("Input No. of Iteration: ");
    scanf("%d", &N);
    
    printf("Input Numbers: ");
    int arr[N];
    for (int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }

    int max=arr[0];
    for (int i=0; i<N; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }

    printf("%d\n", max);
    return 0;
}                                                                                                                                                                                                                                                                                                                                                                