// Author : InferiorAK
// Work_Done : 28 Dec 2024

#include <stdio.h>

int Max(int list[])
{
	int max = list[0];

	for (int i = 0; i < 5; i++)
	{
		if (list[i] > max)
			max = list[i];
	}
	return max;
}

int main()
{
	int list[5] = {11, 120, 45, 60, 69};

	int max = Max(list);
	for (int i = 0; i < 5; i++)
	{
		if (list[i] == max)
			list[i] = 0;
	}

	int sec_max = Max(list);
	printf("2nd Largest Num: %d\n", sec_max);
}
