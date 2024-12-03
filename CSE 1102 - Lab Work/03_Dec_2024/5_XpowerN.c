// Author : InferiorAK
// Work_Done : 03 Dec 2024

#include <stdio.h>

int main(){
    long long X;
    int N;

    printf("Enter value of X: ");
    scanf("%lld", &X);
    printf("Enter value of N: ");
    scanf("%d", &N);

    long long ans1=1;
    double ans2=1;

    if (N==0) printf("%lld\n", ans1);
    else if (N>0){
        for(int i=0; i<N; i++) ans1 *= X;
    }
    else{
        for(int i=0; i<-N; i++) ans2 /= (double) X;
    }

    if(ans1>1) printf("%lld\n", ans1);
    else printf("%lf\n", ans2);
}