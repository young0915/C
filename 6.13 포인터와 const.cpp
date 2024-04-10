#include <iostream>


// 6.13 포인터와 const
using namespace std;

int main()
{
	// 사용법  
	// value 는 변경 못함.
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


	// 가리키는 있는 주소에 있는 값을 안 바꾸겠다는 것을 의미하는 것이지
	// 이 ptr에 저장되는 주소값을 안바꾸겠다는 의미는 아님
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
	int* const ptr3 = &value4;// 포인터를 상수로 만든느 const

	// 10
	*ptr3 = 10;
	cout << *ptr3 << endl;


	int value5 = 10;
	const int* const ptr5 = &value5;
	
	// 10
	cout << *ptr5 << endl;

	// 요약
	int vlaue6 = 5;
	const int* ptr6 = &vlaue6; // 상수를 가리키는 포인터 -> 상수를 가리키는 포인터는 상수를 가리킬 뿐, 상수 자체가 아니므로 다른 값을 가리킬 수 있다.
	int *const ptr7 = &vlaue6; // 상수 포인터 ->포인터가 상수일 뿐, 가리키는 변수는 상수가 아니므로 포인터를 역참조하여 값을 변경하는 것은 가능하다.
	const int* const ptr8 = &vlaue6;//상수를 가리키는 상수 포인터 ->상수를 가리키는 상수 포인터는 다른 주소를 가리키도록 수정할 수 없으며, 역참조를 통해 값을 수정할 수도 없다.

	
	return 0;
}