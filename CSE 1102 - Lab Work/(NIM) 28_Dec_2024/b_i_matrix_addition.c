// Author : InferiorAK
// Work_Done : 28 Dec 2024

#include <stdio.h>

int main()
{
	int m1[3][3], m2[3][3], matrix[3][3];

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			scanf("%d", &m1[i][j]);

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			scanf("%d", &m2[i][j]);

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			matrix[i][j] = m1[i][j] + m2[i][j];

	printf("\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			printf("%d ", matrix[i][j]);
		printf("\n");
	}
}
