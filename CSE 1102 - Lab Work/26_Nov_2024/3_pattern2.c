// Author : InferiorAK
// Work_Done : 26 Nov 2024

#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int i = 2;
    int x = 2;
    printf("1");
    while (x<N){
        printf(" -> %d", x);
        x=1<<i;
        i++;
    }
    printf(" .");
    return 0;
}