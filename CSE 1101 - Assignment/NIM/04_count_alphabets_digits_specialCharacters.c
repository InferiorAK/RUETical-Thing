// Author : InferiorAK
// Solved : 29 Jan 2025

#include <stdio.h>
#include <ctype.h>

int main(){
    char str[30] = "This # That @nd T3sty T3st";

    int alpha = 0, dig = 0, spChar = 0;
    for (int i = 0; str[i] != '\0'; i++){
        if (isspace(str[i])) continue;
        else if (isalpha(str[i])) alpha++;
        else if (isdigit(str[i])) dig++;
        else spChar++;
    }

    printf("Alphabets: %d\nDigits: %d\nSpecial Characters: %d\n", alpha, dig, spChar);
    return 0;
}
