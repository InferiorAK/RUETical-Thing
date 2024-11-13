// Author : InferiorAK
// Work_Done : 12 Nov 2024

# include <stdio.h>

int main(){
    int S;
    scanf("%d", &S);
    
    int h, m, s;
    h = S / 3600;
    m = (S - h * 3600) / 60;
    s = S - (h * 3600 + m * 60);

    printf("%d:%d:%d\n", h, m, s);
}