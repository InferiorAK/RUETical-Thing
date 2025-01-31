// Author : InferiorAK
// Solved : 29 Jan 2025

#include <stdio.h>

int main(){
    char s1[11] = "Testy Test";
    char s2[11] = "Testy Test";

    int i = 0;
    while(s1[i] != '\0' || s2[i] != '\0'){
        if (s1[i] != s2[i]){
            printf("Not Equal\n");
            return 0;
        }
        i++;
    }
    printf("Equal Strings\n");
    return 0;
}
