// Author : InferiorAK
// Work_Done : 26 Nov 2024

#include <stdio.h>

int main(){
    long long n;
    scanf("%lld", &n);

    long long sum = 0;
    for (int i=0; i<n; i++){
        sum += n % 10;
        n = n / 10;
        if (n==0) break;
    }
    printf("%lld\n", sum);
    
    return 0;
}