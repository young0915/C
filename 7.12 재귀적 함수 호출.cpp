#include <iostream>
#include <cassert>
#include <array>

using namespace std;

//7.12 재귀적 함수 호출
// 7.13 방어적 프로그래밍의 개념
// 7.14 단언하기 assert

int Fibonachi(int n)
{

	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	else
		return Fibonachi(n - 1) + Fibonachi(n - 2);
}

void printValue(const array<int, 5> &my_array, const int& ix)
{

	// 문제를 확인하기 위해 assert를 사용할 수 있다.
	assert(ix >= 0);
	assert(ix <= my_array.size() - 1);
	// 5
	cout << my_array[ix] << endl;
}

int main()
{

	cout << Fibonachi(5) << " ";

	cout << endl;

	/*int x;
	cin >> x;

	if (x > 5)
		cout << " x is greater than 5 " << endl;
*/

	// // 7.14 단언하기 assert


	int number = 5;

	// number should be 5
	assert(number == 5);


	std::array<int, 5> my_array{ 1,2,3,4,5 };

	// 만약 4대신 100을 넣으면 어떻게 될까?
	// 라이브라고 치면 누군가가 모르고 지정된 것보다 이상 범위를 적으면 에러가 발생한다
	// 그러니 assert키워드를 넣어서 확인하는 것이다.
	printValue(my_array, 4);


	const int x = 10;

	assert(x == 5);

	// 에러 발생!
	//static_assert(x == 5, "x should be 5 ");
	

	return 0;
}