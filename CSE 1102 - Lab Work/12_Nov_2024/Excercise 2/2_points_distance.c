// Author : InferiorAK
// Work_Done : 12 Nov 2024

# include <stdio.h>
# include <math.h>

int main(){
    float x1, y1, x2, y2;
    float D;

    printf("x1 y1 x2 y2: ");
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    float o = (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
    printf("%f\n", sqrt(o));
    // printf("Distance: %f", D);
    // return 0;
}