// Author : InferiorAK
// Work_Done : 03 Dec 2024

#include <stdio.h>

int main(){
    int x1, x2;
    scanf("%d %d", &x1, &x2);

    int x;
    for (int i=x1; i<=x2; i++){if(i%3==0){ x=i; break;}}

    long long sum = 0;
    for (int i=x; i<=x2; i+=3){
        sum += i;
    }
    printf("%lld\n", sum);
}