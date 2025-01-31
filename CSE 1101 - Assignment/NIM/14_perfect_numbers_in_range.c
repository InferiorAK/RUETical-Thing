// Author : InferiorAK
// Solved : 01 Feb 2025

#include <stdio.h>

int perfect(int range){
    for (int num = 1; num <= range; num++){
        int sum = 0;

        for (int i = 1; i <= num / 2; i++){
            if (num % i == 0) sum += i;
        }

        if (num == sum) printf("%d ", num);
    }
}

int main(){
    int range; scanf("%d", &range);

    printf("Perfect Numbers in range of %d:\n", range);
    perfect(range);

    return 0;
}