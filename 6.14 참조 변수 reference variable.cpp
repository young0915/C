#include <iostream>

using namespace std;

//6.14 참조 변수 reference variable

void doSomething(int n)
{
	cout << &n << endl;
	n = 10; 
	cout << "In doSomething" << n << endl;
}

void printElements(int(&arr)[5])
{
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	cout << endl;
}


struct Something
{
	int v1;
	float v2;
};

struct  other
{
	Something st;
};

int main()
{
	int value = 5;
	int* ptr = &value;

	int& ref = value;


	//5
	cout << ref << endl;

	ref = 10;	// *ptr =10;
	//10 10
	cout << value << " " << ref << endl;


	// 주소 모두 동일값으로 출력됨.
	cout << &value << endl;
	cout << &ref << endl;
	cout << ptr << endl;
	// 이거 빼고
	cout << &ptr << endl;

	int value1 = 5;
	int value2 = 10;

	int& ref1 = value1;

	// 5
	cout << ref1 << endl;

	ref1 = value2;
	// 10
	cout << ref1 << endl;


	int n = 5;


	/*
	
	5
	In doSomething 10
	
	*/
	cout << n << endl;
	cout << &n << endl;
	doSomething(n);
	// 5
	cout << n << endl;


	const int leghth = 5;
	int arr[leghth] = { 1,2,3,4,5 };
	// 
	printElements(arr);

	other ot;
	
	int& v1 = ot.st.v1;
	v1 = 1;
	cout << v1 << endl;

	int value = 5;

	int* const ptr = &value;
	int& ref = value;

	*ptr = 10;
	ref = 10;


	return 0;
}