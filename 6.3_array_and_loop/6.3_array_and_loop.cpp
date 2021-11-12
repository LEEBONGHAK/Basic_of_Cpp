#include <iostream>
#include <limits>

#define endl '\n'
using namespace std;

int main()
{
	// find average
	const int num_students = 5;
	int score0 = 84;
	int score1 = 92;
	int score2 = 76;
	int score3 = 81;
	int score4 = 56;

	int total_score = score0 + score1 + score2 + score3 + score4;

	double avg_score = static_cast<double>(total_score) / num_students;
	// Note : double(total_score) / num_students != double(total_score / num_students);
	cout << avg_score << endl;

	int scores[num_students] = { 84,92,76,81,56 };
	total_score = 0;
	for (int i = 0; i < num_students; i++)
		total_score += scores[i];

	avg_score = static_cast<double>(total_score) / num_students;
	cout << avg_score << endl;

	int scores1[] = { 84,92,76,81,56 };
	total_score = 0;
	int arr_size = sizeof(scores1) / sizeof(int);	// parameter로 넘어간 array의 경우 주의 (주소로 넘어간 것이기 때문에)
	for (int i = 0; i < arr_size; i++)
		total_score += scores[i];

	avg_score = static_cast<double>(total_score) / num_students;
	cout << avg_score << endl;
	cout << endl;


	// find max number
	int scores2[] = { 84,92,76,81,56 };
	int max_score = 0;
	arr_size = sizeof(scores2) / sizeof(int);
	for (int i = 0; i < arr_size; i++) {
		//max_score = (max_score < scores2[i]) ? scores2[i] : max_score;
		if (max_score < scores2[i]) max_score = scores2[i];
	}
	cout << max_score << endl;


	// find min number
	int scores3[] = { 84,92,76,81,56 };
	int min_score = numeric_limits<int>::max();
	arr_size = sizeof(scores3) / sizeof(int);
	for (int i = 0; i < arr_size; i++) {
		//min_score = (min_score > scores3[i]) ? scores3[i] : min_score;
		if (min_score > scores3[i]) min_score = scores3[i];
	}
	cout << min_score << endl;

	return 0;
}