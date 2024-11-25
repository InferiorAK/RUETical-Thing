// Author : InferiorAK
// Work_Done : 19 Nov 2024

#include <stdio.h>

int main(){
    char c;
    scanf("%c", &c);

    switch (c)
    {
        case 'a'...'z': 
            switch (c)
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u': printf("Vowel\n"); break;
                default : printf("Consonant\n"); break;
            }
            break;
        case 'A'...'Z': 
            switch (c)
            {
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U': printf("Vowel\n"); break;
                default : printf("Consonant\n"); break;
            }
            break;
        case '0'...'9': printf("Digit\n"); break;
        case ' ': printf("Space\n"); break;
        default : printf("Special Character\n");
    }
    return 0;
}