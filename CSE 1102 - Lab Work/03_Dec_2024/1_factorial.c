// Author : InferiorAK
// Work_Done : 03 Dec 2024

#include <stdio.h>

int main(){
    long long num;
    scanf("%lld", &num);
    
    unsigned long long fac = 1;
    for(int i=num; i>0; i--) fac *= i;
    printf("%llu\n", fac);
}