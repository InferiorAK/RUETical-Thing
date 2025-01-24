// Author : InferiorAK
// Work_Done : 18 Jan 2025

#include <stdio.h>

// With Recursion
int gcd(int a, int b){
	if (b == 0) return a;
	else return gcd(b, a % b);
}

// Without Recursion
int n_gcd(int a, int b){
	int min = a;
	if (a > b) min = b;

	int g;
	for (int i=1; i<=min; i++) if (a % i == 0 && b % i == 0) g = i;
	return g;
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);

	printf("%d\n", gcd(a, b));
	printf("%d\n", n_gcd(a, b));

	return 0;
}