#include <iostream>
#include <limits>
#include <vector>

using namespace std;

//6.17 C++11 For-each ¹Ýº¹¹®

int main()
{
	 int fibonacci[] = { 0,1,1,2,3,5,8,13,21,34,55,89 };

	 //for (auto& number : fibonacci)
		// number = 10;

	 //// 10 10 10 10 10 10 10 10 10 10 10 10
	 //for (const auto& number : fibonacci)
		// cout << number << " ";
	 //cout << endl;


	 // 10, 10, 10, 10, 10, 10
	 //for (int& number : fibonacci)
		// number = 10;


	// 0 1 1 2 3 5 8 13 21 34 55 89
	// 10 10 10 10 10 10 10 10 10 10 10 10
	// output
	for (int number : fibonacci)
		cout << number << " ";
	cout << endl;

	int max_number = std::numeric_limits<int>::lowest();

	for (const auto& n : fibonacci)
	{
		max_number = std::max(max_number, n);
	}

	// 89
	cout << max_number;

	cout << endl;

	vector<int > fibonacci1 = { 0,1,1,2,3,5,8,13,21,34,55,89 };

	for (const auto& n : fibonacci1)
	{
		max_number = std::max(max_number, n);
	}
	// 89
	cout << max_number;
	return 0;
}