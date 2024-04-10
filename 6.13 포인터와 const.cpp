#include <iostream>


// 6.13 �����Ϳ� const
using namespace std;

int main()
{
	// ����  
	// value �� ���� ����.
	const int value = 5;
	const int* ptr = &value;


	/*
	5
	012FF9D4
	*/
	cout << *ptr << endl;
	cout << ptr << endl;

	int value2 = 6;
	const int* ptr2 = &value2;

	value2 = 7;

	/*
	7
	7
	007FFAFC
	*/
	cout << value2 << endl;
	cout << *ptr2 << endl;
	cout << ptr2 << endl;


	// ����Ű�� �ִ� �ּҿ� �ִ� ���� �� �ٲٰڴٴ� ���� �ǹ��ϴ� ������
	// �� ptr�� ����Ǵ� �ּҰ��� �ȹٲٰڴٴ� �ǹ̴� �ƴ�
	int value3 = 8;
	ptr2 = &value3;


	/*
	8
	8
	00AFF7CC
	*/
	cout << value3 << endl;
	cout << *ptr2 << endl;
	cout << ptr2 << endl;

	int value4 = 9;
	int* const ptr3 = &value4;// �����͸� ����� ����� const

	// 10
	*ptr3 = 10;
	cout << *ptr3 << endl;


	int value5 = 10;
	const int* const ptr5 = &value5;
	
	// 10
	cout << *ptr5 << endl;

	// ���
	int vlaue6 = 5;
	const int* ptr6 = &vlaue6; // ����� ����Ű�� ������ -> ����� ����Ű�� �����ʹ� ����� ����ų ��, ��� ��ü�� �ƴϹǷ� �ٸ� ���� ����ų �� �ִ�.
	int *const ptr7 = &vlaue6; // ��� ������ ->�����Ͱ� ����� ��, ����Ű�� ������ ����� �ƴϹǷ� �����͸� �������Ͽ� ���� �����ϴ� ���� �����ϴ�.
	const int* const ptr8 = &vlaue6;//����� ����Ű�� ��� ������ ->����� ����Ű�� ��� �����ʹ� �ٸ� �ּҸ� ����Ű���� ������ �� ������, �������� ���� ���� ������ ���� ����.

	
	return 0;
}