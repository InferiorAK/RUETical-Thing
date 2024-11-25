// Author : InferiorAK
// Work_Done : 19 Nov 2024

#include <stdio.h>

int main(){
    int x, y;
    printf("Enter two numbers:\n");
    scanf("%d %d", &x, &y);

    printf("Operation to be performed (+, -, *, /): ");
    char chr;
    scanf(" %c", &chr);

    switch (chr){
        case '+': printf("\nThe Result = %d\n", x+y); break;
        case '-': printf("\nThe Result = %d\n", x-y); break;
        case '*': printf("\nThe Result = %d\n", x*y); break;
        case '/': printf("\nThe Result = %d\n", x/y); break;
        default : printf("\nInvalid!\n");
    }

    return 0;
}