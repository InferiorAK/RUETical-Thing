// Author : InferiorAK
// Work_Done : 19 Nov 2024

#include <stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);

    int res = (x < y) ? x : y;
    printf("%d\n", res);
    return 0;
}