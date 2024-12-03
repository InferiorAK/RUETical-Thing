// Author : InferiorAK
// Work_Done : 26 Nov 2024

#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    if(N>0){
        for (int i=N; i>1; i--){
            printf("%d -> ", i);
        }
        printf("1 .\n");
    }
    return 0;
}