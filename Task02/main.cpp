#include <iostream>

#define N 5
#define M 10

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

	int sum = 0;

	for (int i = 0; i < N; i++)
	{
		sum += matrix[i][i];
	}

	cout << "Sum: " << sum << endl;

	return 0;
}