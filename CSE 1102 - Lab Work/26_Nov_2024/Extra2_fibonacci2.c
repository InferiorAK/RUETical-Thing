// Author : InferiorAK
// Work_Done : 26 Nov 2024

#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int a = 1, b = 1;
    int sum = a + b;
    printf("%d %d ", a, b);
    for(int i=1; i<=N-2; i++){
        printf("%d ", sum);
        a = b;
        b = sum;
        sum = a + b;
    }
    printf("\n");

    return 0;
}