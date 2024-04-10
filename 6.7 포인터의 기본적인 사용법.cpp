#include <iostream>
#include <typeinfo>

//6.7 포인터의 기본적인 사용법

using namespace std;

// 지역 변수는 '스택' 메모리를 사용하고 동적 할당 메모리는 '힙' 메모리를 사용합니다. 
// 자세한 내용은 '스택과 힙'에서 다룹니다.
// 큰 메모리에 저장되어 있는 데이터중에서 일부분을 CPU가 사용하기 위하여 메모리로부터 가져올 때는 
// 메로미 전체를 모두 뒤지면서 찾는 것이 아니라 필요한 데이터가 저장되어 있는 '주소'를 사용하여 직접 접근하여 가져옵니다.


// 메모리주소를 담는 변수를 포인터라고 부른다,.

struct  Something
{
	int a, b, c, d;
};
int main()
{
	int x = 5;
	double d = 123.0;


	// 메모리 주소 출력 & : address-of operator

	// de-reference operator (*)

	// 포인터를 사용하는 이유
	// 메모리 관리 때문
	// 포인터를 사용시 초기화를 해줘야한다. 주소값을 가지고 있지 않으면 에러가 발생한다.

	int* ptr_x = &x, * ptr_y = &x;

	cout << ptr_x << endl; // 012FF8A4
	cout << *ptr_x << endl; //5





	int* ptr_x_1;
	double* ptr_d;

	/*
	4
8
4 4
4 4
	*/
	// 주소는 주소기 때문에 값이 고정되어 있다.
	cout << sizeof(x) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(x) << " " << sizeof(ptr_x) << endl;
	cout << sizeof(&d) << " " << sizeof(ptr_d) << endl;


	Something ss;
	Something* ptr_s;

	cout << sizeof(Something) << endl;	// 16
	cout << sizeof(ptr_s) << endl;		// 4


	return 0;
}