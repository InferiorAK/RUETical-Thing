// Author : InferiorAK
// Work_Done : 04 Jan 2025

#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);

	for (int i=1; i<=n; i++){
		for (int j=0; j<i; j++){
				printf("%d ", j+1);
		}
		printf("\n");
	}
}