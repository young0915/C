#include <iostream>

using namespace std;


// 7.6 �ζ��� �Լ�
// ����ȭ�� ��.


inline int min(int x, int y)
{
	return x > y ? y : x;
}


int main()
{

	/*
	5
	2
	*/
	cout << min(5, 6) << endl;
	cout << min(3, 2) << endl;


	return 0;
}