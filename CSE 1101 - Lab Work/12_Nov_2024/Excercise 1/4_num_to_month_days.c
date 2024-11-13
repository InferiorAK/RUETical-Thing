// Author : InferiorAK
// Work_Done : 12 Nov 2024

#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    
    int m, d;
    m = num / 30;
    d = num - m * 30;

    printf("%d month and %d days\n", m, d);
    return 0;
}
