#include <iostream>
#include "4.2 전역변수, 정적변수, 내부 연결, 외부 연결 MyConstant.h"

using namespace std;

extern int a =123; // -> 초기화를 해줘야함.


void doSomething1() // 머리.
{
	// 몸체.
	cout << "hi" << endl;
	cout << "In ext.cpp " << Constants::pi << " " << &Constants::pi << endl;


}