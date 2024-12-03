// Author : InferiorAK
// Work_Done : 26 Nov 2024

#include <stdio.h>

int main(){
    int SUM;
    scanf("%d", &SUM);

    int a = 1, b = 1;
    int sum = a + b;
    printf("%d %d ", a, b);
    while (sum <= SUM){
        printf("%d ", sum);
        a = b;
        b = sum;
        sum = a + b;
    }
    printf("\n");

    return 0;
}