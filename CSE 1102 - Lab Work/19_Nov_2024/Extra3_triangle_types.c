// Author : InferiorAK
// Work_Done : 19 Nov 2024

#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if ((a+b>c) && (b+c>a) && (c+a>b)){
        if ((a==b) && (a==c)){
            printf("Equilateral Triangle\n");
        }
        else if((a!=b) && (a!=c)){
            printf("Scelene Triangle\n");
        }
        else printf("Isosceles Triangle\n");
    }
    else printf("Invalid!!!\n");

    return 0;
}