// Author : InferiorAK
// Work_Done : 03 Dec 2024

#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int count=0;

    int num=1;
    while(count<N){
        int sum=0;
        for (int i=1; i<num; i++) if (num%i==0) sum += i;
        if (sum == num){
            printf("%d\n", num);
            count++;
        }
        num++;
    }
}