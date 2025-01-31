// Author : InferiorAK
// Solved : 01 Feb 2025

#include <stdio.h>

int checkNum(int num){
    if (num % 2 == 0) printf("%d is an Even Number\n", num);
    else printf("%d is an Odd Number\n", num);
}

int main(){
    int num; scanf("%d", &num);
    checkNum(num);

    return 0;
}