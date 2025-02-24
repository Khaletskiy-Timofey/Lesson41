#include "logic.h"

int sum_of_elemnts(int matrix[N][N])
{
	int sum = 0;

	for (int i = 0; i < N; i++)
	{
		int length = N - i - 1;

		for (int j = 0; j < length; j++)
		{
			sum += matrix[i][j];
		}
	}

	return sum;
}