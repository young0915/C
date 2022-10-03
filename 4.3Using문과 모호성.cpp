#include <iostream>

// 객체지향프로그래밍할 때
// 오버로딩 또는 오버라이딩하는 경우 있다.
// 그래서 compiler는 어떤것을 호출해야하는 의문을 발생한다
// 그래서 그것을 Ambiguity(모호성)이라고 한다.
// 

namespace A
{
	int my_var(10);
	int my_a(123);
}

namespace B
{
	int my_var(20);
	int my_b(456);
}

int main()
{
	using namespace std;

	cout << "Hello" << endl;


	using namespace A;
	using namespace B;

			// :: 영역 지정 연산자.
	cout << A::my_var << endl;
	cout << A::my_var << endl;


	return 0;
}