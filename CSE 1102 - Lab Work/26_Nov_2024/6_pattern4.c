// Author : InferiorAK
// Work_Done : 26 Nov 2024

#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int sum=(N-1)*N;
    for (int i=1; i<N-1; i++){
        sum += i*(i+1);
        printf("%d*%d + ", i, i+1);
    }
    printf("%d*%d = ", (N-1), N);
    printf("%d\n", sum);
    
    return 0;
}