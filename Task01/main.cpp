#include <time.h>
#include "logic.h"
#include "utils.h"

#define SIZE 5

int main()
{
	srand(time(0));

	int group1[SIZE];
	int group2[SIZE];
	int group3[SIZE];

	init_array(group1, SIZE, 1, 10);
	init_array(group2, SIZE, 1, 10);
	init_array(group3, SIZE, 1, 10);

	cout << "Group 1: " << array_to_string(group1, SIZE) << endl;
	cout << "Group 2: " << array_to_string(group2, SIZE) << endl;
	cout << "Group 3: " << array_to_string(group3, SIZE) << endl << endl;

	double group1_arithmetic_mean = calculate_arithmetic_mean(group1, SIZE);
	double group2_arithmetic_mean = calculate_arithmetic_mean(group2, SIZE);
	double group3_arithmetic_mean = calculate_arithmetic_mean(group3, SIZE);

	cout << "Group 1 arithmetic mean: " << group1_arithmetic_mean << endl;
	cout << "Group 2 arithmetic mean: " << group2_arithmetic_mean << endl;
	cout << "Group 3 arithmetic mean: " << group3_arithmetic_mean << endl << endl;

	int max_arithmetic_mean_index = find_max_arithmetic_mean_index(group1_arithmetic_mean, group2_arithmetic_mean, group3_arithmetic_mean);

	cout << "Max arithmetic mean in group " << to_string(max_arithmetic_mean_index) << endl;

	return 0;
}