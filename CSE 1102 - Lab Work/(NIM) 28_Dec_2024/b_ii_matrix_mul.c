// Author : InferiorAK
// Work_Done : 28 Dec 2024

#include <stdio.h>

int main()
{
	int m1[3][3], m2[3][3];
	int matrix[3][3];
	// int matrix[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

	// Storing matrix[3][3]
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			matrix[i][j] = 0;

	// Matrix Input
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			scanf("%d", &m1[i][j]);

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			scanf("%d", &m2[i][j]);

	// Multiplication
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			for (int k = 0; k < 3; k++)
				matrix[i][j] += m1[i][k] * m2[k][j];	// m1[row_static_by_i][column_change] * m2[row_change][column_static_by_j]

	printf("\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			printf("%d ", matrix[i][j]);
		printf("\n");
	}
}
