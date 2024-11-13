// Author : InferiorAK
// Work_Done : 12 Nov 2024

#include <stdio.h>

int main(){
	int a, b;
	a = 6;
	b = 9;

	int swap;
	swap = a;
	a = b;
	b = swap;

	printf("%d %d\n", a, b);
	return 0;
}
