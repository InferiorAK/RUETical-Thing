// Author : InferiorAK
// Work_Done : 18 Jan 2025

#include <stdio.h>
#include <string.h>

void rev(char* s) {

    // Initialize l and r pointers
    int l = 0;
    int r = strlen(s) - 1;
    char t;

    // Swap characters till l and r meet
    while (l < r) {
        t = s[l];
        s[l] = s[r];
        s[r] = t;

        l++;
        r--;
    }
}

int main() {
    char s[100] = "";
    scanf("%s", s);
	
  	// Reversing s
    rev(s);
  
    printf("%s\n", s);
    return 0;
}