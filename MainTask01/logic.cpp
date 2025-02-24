#include "logic.h"

int sum_of_elemnts(int matrix[N][N])
{
	int sum = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			sum += matrix[i][j];
		}
	}

	return sum;
}