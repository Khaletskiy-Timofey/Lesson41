#include "logic.h"

int sum_of_elemnts(int matrix[N][N])
{
	int sum = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < i; j++)
		{
			sum += matrix[i][j];
		}
	}

	return sum;
}