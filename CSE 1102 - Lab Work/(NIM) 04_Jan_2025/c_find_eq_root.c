// Author : InferiorAK
// Work_Done : 04 Jan 2025

#include <stdio.h>
#include <math.h>

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	float x1 = (-b + sqrt(pow(-b, 2) - 4 * a * c)) / (2 * a);
	float x2 = (-b - sqrt(pow(-b, 2) - 4 * a * c)) / (2 * a);

	printf("x1 = %f\n", x1);
	printf("x2 = %f\n", x2);

	return 0;
}