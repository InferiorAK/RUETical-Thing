// Author : InferiorAK
// Work_Done : 10 Dec 2024

#include <stdio.h>

int main(){
    int row, col;
    printf("Matrix row and columns : ");
    scanf("%d %d", &row, &col);

    printf("Enter the Elements of (%dx%d) Matrix :\n", row, col);
    int arr[row][col];
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++)
            scanf("%d", &arr[i][j]);
    }

    int Transpose[col][row];
    for (int j=0; j<col; j++){
        for (int i=0; i<row; i++){
            Transpose[j][i] = arr[i][j];
        }
    }

    for (int j=0; j<col; j++){
        for (int i=0; i<row; i++){
            printf("%d ", Transpose[j][i]);
        }
        printf("\n");
    }
}
