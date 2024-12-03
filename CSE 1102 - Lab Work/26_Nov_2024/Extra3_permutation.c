// Author : InferiorAK
// Work_Done : 26 Nov 2024

#include <stdio.h>

int main(){
    int n, r;
    scanf("%d %d", &n, &r);

    unsigned long long prod_up = 1;
    unsigned long long prod_down = 1;
    if (r<n){
        for (int i=n; i>0; i--){
            prod_up *= i;
        }
        for (int i=(n-r); i>0; i--){
            prod_up *= i;
        }

        printf("%llu", prod_up / prod_down);
        printf("\n");
    }

    return 0;
}