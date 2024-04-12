#include <iostream>
#include "calc.h"

using namespace std;
// 8.8 클래스 코드와 헤더 파일


int main()
{
	Calc cal(10);
	// 38
	cal.add(10).sub(1).mult(2).print();


	return 0;
}