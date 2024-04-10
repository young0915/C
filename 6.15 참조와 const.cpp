#include <iostream>

using namespace std;

// 6.15 참조와 const

// const int& x -> 포인터로 넣게 되면 변수 복사가 일어나는데 복사가 안일어남
void doSomething(const int& x)
{
	cout << x << endl;
	cout << &x << endl;
}

int main()
{
	int x = 5;
	int &ref_x = x;

	const int& ref_2 = ref_x;


	const int& ref_x3 = 3 + 4;

	cout << ref_x3 << endl;
	cout << &ref_x3 << endl;

	doSomething(ref_x3);
	doSomething(ref_x3 + 1);
	doSomething(1);


	return 0;
}