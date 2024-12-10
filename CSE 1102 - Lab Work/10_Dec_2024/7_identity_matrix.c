// Author : InferiorAK
// Work_Done : 10 Dec 2024

#include <stdio.h>

int main(){
    int n;
    printf("Input N : ");
    scanf("%d", &n);

    int I[n][n];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++)
            if (i == j) I[i][j] = 1;
            else I[i][j] = 0;
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            printf("%d ", I[i][j]);
        }
        printf("\n");
    }
}