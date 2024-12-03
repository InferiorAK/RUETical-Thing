// Author : InferiorAK
// Work_Done : 26 Nov 2024

#include <stdio.h>

int main(){
    int N, sum=0;
    scanf("%d", &N);

    for(int i=2; i<=N; i+=2)
    {
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}