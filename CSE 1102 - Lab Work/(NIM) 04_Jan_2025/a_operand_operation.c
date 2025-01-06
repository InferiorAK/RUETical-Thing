// Author : InferiorAK
// Work_Done : 04 Jan 2025

#include <stdio.h>

int main(){
	int a, b;
	char o;
	scanf("%d %c %d", &a, &o, &b);

	switch(o){
		case('+') : printf("%d %c %d = %d\n", a, o, b, a + b); break;
		case('-') : printf("%d %c %d = %d\n", a, o, b, a - b); break;
		case('*') : printf("%d %c %d = %d\n", a, o, b, a * b); break;
		case('/') : printf("%d %c %d = %d\n", a, o, b, a / b); break;
		case('%') : printf("%d %c %d = %d\n", a, o, b, a % b); break;
		default: printf("Invalid!!!\n");
	}
	return 0;
}
