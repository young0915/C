#include <iostream>

using namespace std;
//6.7a 널 포인터 Null Pointer
// 함수 파라미터로 사용할 때 유용함

void doSomething(double* ptr)
{
	// 메모리값이 다시 복사 되어서 다른값으로 출력됨.
	//  address of pointer varaible in doSomething () 00CFF9E0
	cout << " address of pointer varaible in doSomething () " << &ptr << endl;

	if (ptr != nullptr)
	{
		// do something useful
		cout << *ptr << endl;

	}
	else
	{
		// do nothing with ptr
		cout << " Null ptr, do nothing" << endl;
	}
}


int main()
{
	double* ptr = nullptr;	// moder c++ 


	//Null ptr, do nothing
	doSomething(ptr);
	//		Null ptr, do nothing
	doSomething(nullptr);

	double d = 3.14;
	// 3.14
	doSomething(&d);

	ptr = &d;
	// 3.14
	doSomething(ptr);


	// 사용법
	// null pointer밖엔 못 넣음. 
	// 가끔 함수 파라미터에서 필요한 경우가 있음 
	nullptr_t nptr; 
	// address of pointer varaible in main () 00CFFAD0
	cout << " address of pointer varaible in main () " << &ptr << endl;

	return 0;
}