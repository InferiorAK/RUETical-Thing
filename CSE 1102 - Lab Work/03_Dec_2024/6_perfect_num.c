// Author : InferiorAK
// Work_Done : 03 Dec 2024

#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);

    int sum=0;
    for (int i=1; i<num; i++) if (num%i==0) sum += i;
    if (sum == num) printf("%d is a Perfect Number\n", num);
    else printf("%d is not a Perfect Number\n", num);
}