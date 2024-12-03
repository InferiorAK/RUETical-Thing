// Author : InferiorAK
// Work_Done : 03 Dec 2024

#include <stdio.h>

int main(){
    int num;
    long long x;
    scanf("%d", &num);

    long long min = 10000000000000000;
    for (int i=0; i<num; i++){
        scanf("%lld", &x);
        if (x<min) min = x;
    }
    printf("%lld\n", min);
}