double calculate_arithmetic_mean(int* array, int size)
{
	double sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += array[i];
	}

	return sum / size;
}

int find_max_arithmetic_mean_index(double group1_arithmetic_mean, double group2_arithmetic_mean, double group3_arithmetic_mean)
{
	if (group1_arithmetic_mean > group2_arithmetic_mean && group1_arithmetic_mean > group3_arithmetic_mean)
	{
		return 1;
	}
	else if (group2_arithmetic_mean > group3_arithmetic_mean)
	{
		return 2;
	}
	else
	{
		return 3;
	}
}