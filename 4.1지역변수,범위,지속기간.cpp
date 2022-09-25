#include <iostream>

// 지역 변수의 범위와 지속기간
// 블록(복합문), 명칭 공간, 이름 충돌, 이름 숨기기.
// 메모리를 차지하는 곳은 한곳밖엔 없다.

// :: 범위 연산자. 

// 에러가 발생한다면 프로젝트 > 속성 > C/C++ > 언어 >> C++ 언어 표준을 17로변경 할것.
// 최대 두개이하까지만 사용할 것.
namespace work1 :: work11 :: work111
{
	int a = 1;
	void doSomething()
	{
		a += 3;
	}
}

namespace work2
{
	int a = 1;
	void doSomething()
	{
		a += 5;
	}
}

int main()
{
	using namespace std;

	int apple = 5;


	apple = 1;

	work1::work11::work111::a;
	work1::work11::work111::doSomething();

	work2::a;
	work2::doSomething();



	return 0;
}