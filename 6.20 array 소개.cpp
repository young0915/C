#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

//6.20 std::array 소개
// 
// 함수 파라미터로 보낼때 값이 유지됨.
// 주의할 점 -> 그런데 일반변수가  파라미터로 집어 넣으면 한번 복사가 되는 것 처럼 배열도 복사됨 
void printLenght(const array<int, 5>& my_arr)
{
	cout << my_arr.size() << " ";
}

int main()
{

	array<int, 5> my_arr = { 1,22,32,4,51 };
	//my_arr = { 1,22,32,4,51 };


	for (int i = 0; i < my_arr.size(); i++)
		cout << my_arr[i] << " ";
	cout << endl;

	/*cout << my_arr[10] << endl;
	cout << my_arr.at(10) << endl*/;

	printLenght(my_arr);
	
	std::sort(my_arr.begin(), my_arr.end());
	
	// 역순
	//std::sort(my_arr.rbegin(), my_arr.rend());

	/*
	1 22 32 4 51
	5 1 4 22 32 51
	*/
	for (auto element : my_arr)
		cout << element << " ";
	cout << endl;


	return 0;
}