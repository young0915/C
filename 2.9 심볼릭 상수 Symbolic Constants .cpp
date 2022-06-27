#include <iostream>
// 2.9 심볼릭 상수 Symbolic Constants

#define PRICE_PER_ITEM 30
#include "myconst.h" // const 모아둔 곳.

using namespace std;

						// 바꾸지 않도록 const 키워드를 사용하지 못하도록.
void printNumber(const int my_number)
{
	int n = my_number;

	cout << n << endl;
}

int main()
{

	printNumber(123);
	const double garvity{ 9.8 };		
	// 이 데이터의 값이 변화되지 않고 고정되도록 const키워드를 사용하면 된다.
	// const 키워드를 사용한다면 반드시 초기화를 해줘야한다.
	// 


	// 컴파일로 할때 이미 결정되어 있어서 my_cosnt은 123로 결정되어 있다. 즉, 컴파일러 상수
	const int my_cosnt(123);
	constexpr int my_constexp(123);
	// constexpr이란 const + expression : 컴파일 타임에 완전히 결정되는 상수라고 한다.
	// 또한 런타임 상수에서는 사용이 불가하다. 이유는 말그대로 런타임 상수는 런타임때 결정되기 때문이다.


	int number;
	cin >> number;

	const int special_number(number);
	// 런타임 상수.
	
	int num_item = 123;

	const int price_per_itme = 30;

	//int price = num_item * PRICE_PER_ITEM; // -> C언어 사용자. 이렇게 하면 디버깅하기 힘들다.
	int price = num_item * price_per_itme; // -> 바람직한 표현.

	double radius;
	cin >> radius;


	double circumference = 2.0 * radius * constants::pi;

	return 0;
}