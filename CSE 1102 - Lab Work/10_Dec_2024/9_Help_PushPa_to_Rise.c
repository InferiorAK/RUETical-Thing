// Author : InferiorAK
// Work_Done : 10 Dec 2024

#include <stdio.h>

int main(){
    int n;
    printf("Input number of Baaries : ");
    scanf("%d", &n);

    int baari[n];
    printf("Input Baarir Sizes :\n");
    for (int i=0; i<n; i++) scanf("%d", &baari[i]);

    int Help = 0;
    int initial = baari[0];
    int a = 0;
    for (int i=1; i<n; i++){
        if (baari[i] <= initial){
            a = initial - baari[i] + 1;
            Help += a;
            initial = baari[i] + a;
        }
    }

    printf("Help Lagbe : %d\n", Help);
}
