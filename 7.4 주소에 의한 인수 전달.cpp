#include <iostream>

using namespace std;

//7.4 �ּҿ� ���� �μ� ����


void foo(int* ptr)
{
	cout << *ptr << " " << ptr << " " << &ptr << endl;
}

void foo(double degrees, double* sin_out , double* cos_out)
{
	*sin_out = 1.0f;
	*cos_out = 2.0f;
}

void foo(int* arr, int length)
{
	for (int i = 0; i < length; i++)
		cout << arr[i] << endl;

	arr[0] = 1.0f;
}

int main()
{
	int value = 5;



	// 5 012FFAA4
	cout << value << " " << &value << endl;

	int* ptr = &value;
	// 00D9FB14
	cout << &ptr << endl;


	/*
	5 008FFD0C 008FFC2C
	5 008FFD0C 008FFC2C
	*/
	foo(ptr);
	foo(&value);

	double degrees = 30;
	double sin, cos;

	// �Լ����� �ٲ��� ���� �ڿ����� ������ �شٴ� �� �߿��� �Ӽ����� ����.
	foo(degrees, &sin, &cos);
	// 1 2
	cout << sin << " " << cos << endl;



	return 0;
}