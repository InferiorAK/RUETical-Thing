// Author : InferiorAK
// Work_Done : 04 Jan 2025

#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);

	arm = 0;
	int x = num;
	while (x){
		int dig = x % 10;
		arm += dig * dug * dig;
		x /= 10;
	}

	if (arm == num) printf("%d is an Armstrong Number\n");
	else printf("%d is not an Armstrong Number\n");
}