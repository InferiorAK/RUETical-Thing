// Author : InferiorAK
// Work_Done : 03 Dec 2024

#include <stdio.h>

int main(){
    int lines;
    lines = 6;

    char ch = 'A';

    for (int i=1; i<=lines; i++){
        for (int j=lines; j>=i; j--) printf(" ");
        for (int j=1; j<=i; j++) printf("%c ", ch);
        printf("\n");
        ch++;
    }
}