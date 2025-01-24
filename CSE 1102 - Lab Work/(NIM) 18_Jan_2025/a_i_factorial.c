// Author : InferiorAK
// Work_Done : 18 Jan 2025

#include <stdio.h>

// With Recursion
int fac(int num){
	if (num == 1 || num == 0) return 1;
	else return num * fac(num - 1);
}

// Without Recursion
int n_fac(int num){
	if (num == 1 || num == 0) return 1;
	else{
		int fac = num;
		for (int i = 1; i < num; i++) fac *= num - i;
		return fac;
	}
}

int main(){
	int num;
	scanf("%d", &num);

	printf("%d\n", fac(num));
	printf("%d\n", n_fac(num));

	return 0;
}