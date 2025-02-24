#include "logic.h"

int sum_of_elemnts(int matrix[N][N])
{
	int sum = 0;

	for (int i = 1; i < N; i++)
	{
		int length = N - i - 1;

		for (int j = N - i; j < N; j++)
		{
			sum += matrix[i][j];
		}
	}

	return sum;
}