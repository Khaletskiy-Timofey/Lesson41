#include "logic.h"

int sum_of_elements_on_main_diagonale(int matrix[N][N])
{
	int sum = 0;

	for (int i = 0; i < N; i++)
	{
		sum += matrix[i][i];
	}

	return sum;
}

int sum_of_elements_on_addition_diagonale(int matrix[N][N])
{
	int sum = 0;

	for (int i = 0; i < N; i++)
	{
		sum += matrix[i][N - 1 - i];
	}

	return sum;
}