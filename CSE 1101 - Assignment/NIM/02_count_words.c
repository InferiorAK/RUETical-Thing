// Author : InferiorAK
// Solved : 29 Jan 2025

#include <stdio.h>
#include <ctype.h>

int main(){
    char str[30] = "This is a testy test no";

    int words = 0, inWord = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) inWord = 0;  // We're no longer in a word.
        else {
            if (inWord == 0) {
                words++;  // Found the start of a new word.
                inWord = 1;  // Mark that we're now in a word.
            }
        }
    }

    printf("Total Words: %d\n", words);
    return 0;
}
