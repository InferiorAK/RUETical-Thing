// Author : InferiorAK
// Work_Done : 19 Nov 2024

#include <stdio.h>

int main(){
    char c;
    scanf("%c", &c);

    switch (c)
    {
        case 'a'...'z': printf("Letter\n"); break;
        case 'A'...'Z': printf("Letter\n"); break;
        case '0'...'9': printf("Digit\n"); break;
        case ' ': printf("Space\n"); break;
        default : printf("Special Character\n");
    }
    return 0;
}