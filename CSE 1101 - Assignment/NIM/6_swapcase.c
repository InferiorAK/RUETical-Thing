// Author : InferiorAK
// Solved : 29 Jan 2025

#include <stdio.h>

void swapCase(char str[]){
    for (int i = 0; str[i] != '\0'; i++){
        if (97 <= str[i] && str[i] <= 122){
            str[i] = str[i] - 32;
        }
        else if (65 <= str[i] && str[i] <= 90){
            str[i] = str[i] + 32;
        }
        else{
            continue;
        }
    }
}

int main(){
    // char str[21] = "This is a Testy Test";
    char str[100];
    fgets(str, sizeof(str), stdin);


    swapCase(str);
    printf("%s", str);

    return 0;
}
