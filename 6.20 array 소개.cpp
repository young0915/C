#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

//6.20 std::array �Ұ�
// 
// �Լ� �Ķ���ͷ� ������ ���� ������.
// ������ �� -> �׷��� �Ϲݺ�����  �Ķ���ͷ� ���� ������ �ѹ� ���簡 �Ǵ� �� ó�� �迭�� ����� 
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
	
	// ����
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