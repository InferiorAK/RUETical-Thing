// Author : InferiorAK
// Work_Done : 28 Dec 2024

#include <stdio.h>

int main()
{
	int n = 9;
	int arr[9] = {-4, -3, -2, -1, 0, 1, 2, 3, 4};

	// int neg[n], pos[n], even[n], odd[n];

	int j = 0, k = 0, l = 0, m = 0;
	for (int i = 0; i < n; i++)
	{
		// if (arr[i] < 0){neg[j] = arr[i]; j++;}
		// else {pos[k] = arr[i]; k++;}
		// if (arr[i] % 2 == 0){even[l] = arr[i]; l++;}
		// else {odd[m] = arr[i]; m++;}

		if (arr[i] < 0)
			printf("Neg: %d\n", arr[i]);
		else
			printf("Pos: %d\n", arr[i]);
		if (arr[i] % 2 == 0)
			printf("Even: %d\n", arr[i]);
		else
			printf("Odd: %d\n", arr[i]);
	}
}
