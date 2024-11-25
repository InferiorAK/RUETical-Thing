// Author : InferiorAK
// Work_Done : 12 Nov 2024

# include <stdio.h>

int main(){
    int num, sum = 0;
    scanf("%d", &num);

    // sum += num % 10;
    // num /= 10;
    // sum += num % 10;
    // num /= 10;
    // sum += num % 10;
    // num /= 10;
    // sum += num % 10;

    for (int i=0; i<4; i++)
    {
        sum += num % 10;
        num /= 10;
    }

    printf("%d\n", sum);
}