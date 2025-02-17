#include <iostream>
#include "logic.h"

using namespace std;

int main()
{
	int matrix[N][N]{};

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			matrix[i][j] = rand() % 101;
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	cout << "Sum: " << sum_of_elements_on_main_diagonale(matrix) << endl;

	return 0;
}