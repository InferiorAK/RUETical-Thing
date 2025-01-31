// Author : InferiorAK
// Solved : 29 Jan 2025

#include <stdio.h>

int main(){
    char str[100];
    scanf("%99s", str);  // Use %99s to prevent buffer overflow (reserves space for null terminator)

    for (int i = 0; str[i] != '\0'; i++)  // loop condition until '\0'
        printf("%c\n", str[i]);  // %c to print str[i] as a single character

    return 0;
}
