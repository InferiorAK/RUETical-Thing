// Author : InferiorAK
// Work_Done : 26 Nov 2024

#include <stdio.h>

int main(){
    int N, i=1;
    scanf("%d", &N);

    if (N>0){
        for (i; i<N-3; i+=3) printf("%d -> ", i);
        printf("%d .\n", i);
    }
    return 0;
}