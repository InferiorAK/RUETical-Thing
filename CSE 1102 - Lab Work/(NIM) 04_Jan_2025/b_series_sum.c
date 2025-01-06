// Author : InferiorAK
// Work_Done : 04 Jan 2025

#include <stdio.h>
#include <math.h>

int factorial(int num){
	int fac = num;
	for (int i=1; i<num; i++){
		fac *= num - i;
	}

	return fac;
}

int main(){
	int x;
	scanf("%d", &x);

	double sum = 1;
	int j = 2;
	for (int i=2; i<=10; i+=2){
		if (j % 2 == 0) sum -= pow(x, i) / factorial(i);
		else sum += pow(x, i) / factorial(i);
		j++;
	}

	printf("sum = %lf\n", sum);

	return 0;
}
