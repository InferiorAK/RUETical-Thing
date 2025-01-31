// Author : InferiorAK
// Solved : 01 Feb 2025

#include <stdio.h>

int checkArm(int num){
    int sum = 0;
    int n = num;

    while(n){
        sum += n % 10;
        n /= 10;
    }

    if (sum == num) printf("%d is Armstrong Num\n", num);
    else printf("%d is not Armstrong Num\n", num);
}

int checkPerfect(int num){
    int sum = 0;

    for (int i = 1; i <= num / 2; i++){
        if (num % i == 0) sum += i;
    }

    if (sum == num) printf("%d is Perfect Num\n", num);
    else printf("%d is not Perfect Num\n", num);
}

int main(){
    int num; scanf("%d", &num);
    checkArm(num);
    checkPerfect(num);

    return 0;
}