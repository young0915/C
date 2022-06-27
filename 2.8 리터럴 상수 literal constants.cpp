#include<iostream>
// 2.8 리터럴 상수 literal constants
// Binary Literals


int main()
{
	using namespace std;

	float pi = 3.14f;
	int  i = 1234;			// unsigned 으로 바꾸는 것이라 -1234u쓰는 것은 좋지 않다. 
	// -1234u 것보다는 알아보기 쉽게 (unsinged int) 캐스팅하는 것이 좋다.

	unsigned int n = 5u;
	long n2 = 5L;
	double d = 6.0e-10;


	// Decimal : 0 1 2 3 4 5 6 7 8 9 10
	// Octal : 0 1 2 3 4 5 6 7 10 11 12 13
	// Hexa : 0 1 2 3 4 5 6 7 8 9 A B C D E F 10
	// binary literal
	
	//int x = 012;	// -> 8진수.  10
	//int x = 0xF;		// -> 16진수. 15
	int x = 0b1010;

	cout << x << endl;

	// 0011 1010 1111 1111
	// 3A7F 

	int num_items = 123;
	int price = num_items * 10; // 10 is...
	//  literal constants은데이터가 저장된 메모리 공간을 가리키는 이름을 가지고 있지 않다.
	// 사용하는 것을 지양한다. 나중에 그 상수가 변환될 수 있기 때문이다.



	return 0;
}