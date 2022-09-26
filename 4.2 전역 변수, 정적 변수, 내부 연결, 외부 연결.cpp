#include <iostream>
#include "4.2 전역변수, 정적변수, 내부 연결, 외부 연결 MyConstant.h"

// Global Variable 전역변수
// Static Variable 정적 변수
// Internal Linkage 내부 연결
// External Linkage 외부 연결

// 전역변수는 가급적으로 전역변수를 지양하다.

using namespace std;

// 전역변수
// 전역 변수를 사용한다면 다른 파일에도 영향을 줄 수 있기 때문에.
// 다른 개발자와 사용하면서 혼돈이 올 수 있다.
int value = 123;

void doSomething()
{
	// static의 변수 특징
	// 초기화를 해야한다. 미리 선언해야함.
	// static의 예 싱글턴.
	// 메모리 관점으로 본다면. 이 블럭안에서 반복되면서 사용되는 메모리를
	// 정적으로 같은 주소 같은 메모리를 재사용한다.

	static int a = 1;
	++a;

	cout << a << endl;
}


// Linkage
// 지역변수는 Linkage이 없다.
// Internal Linkage 개별 C++에서만 연결할 수 있는 전역변수를 의미한다.


// forward declaration.
extern void doSomething1();
extern int a;
//extern int a =456;
// extern를 사용한다면
// 초기화를 한다.
// 값을 변경하면 안된다.
// 여러 C++ 파일에서도 사용할 수 있는 변수.


/*
* 
* int g_x; // 여기서 g는 global -> external linkage : 초기화가 안되는 정적변수
* static int g_x; // internal linkage : 다른 cpp 파일에서 접근하지 못하도록 정적벼수.
* 
*/

int main()
{
	cout << value << endl;			// 123

	// 지역변수
	int value = 1;

	cout << ::value << endl;;		// 123
	cout << value << endl;			// 1


	doSomething();					// 2
	doSomething();					// 3


	doSomething1();

	cout << "In main.cpp " << Constants::pi << " " << &Constants::pi << endl;

	return 0;
}