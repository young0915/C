#include <iostream>

using namespace std;

//7.4 주소에 의한 인수 전달


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

	// 함수에서 바꿔준 값이 박에서도 영향을 준다는 거 중요한 속성으로 사용됨.
	foo(degrees, &sin, &cos);
	// 1 2
	cout << sin << " " << cos << endl;



	return 0;
}