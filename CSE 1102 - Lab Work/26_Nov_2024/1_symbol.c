// Author : InferiorAK
// Work_Done : 26 Nov 2024

#include <stdio.h>

int main(){
    int N;
    printf("How many '$': ");
    scanf("%d", &N);

    if (N>0){
        for (int i=1; i<N; i++) printf("$-");
        printf("$.\n");
    }
    return 0;
}