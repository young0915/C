#include <iostream>

// sizeof
// 쉼표 연산자. Comma Oerator
// 조건(부) 연산자. Conditional Operator

int main()
{
	using namespace std;

	float a;

	sizeof(a);  // -> 4 byte.


	// comma operator 

	int x = 3;
	int y = 10; 
	int z = (++x, ++y); // 콤마 연산자란 
	// 콤마 연산자 풀이.
	++x;
	++y;
	int z = y;
	// 그래서 z가 y값으로 출력된다.

	cout << x << " " << y << " " << z << endl;
	// x : 4 y : 11 z : 11

	// Comma operator의 주의사항

	int a = 1, b = 10;
	int z;


	z = a, b;  // ,연산자를 사용한다면 , a 값이 우선순위가 되어 
	// z는 a값이 나온다. 

	cout << z << endl;

	// conditional operator 조건 연산자.
	// 삼항연산자.
	// 주의사항 : 복잡하게 쓴다면 쓰지 말 것. 나중에 코드 보는 사람이 불편해짐.

	bool onSale = true;

	int price;


	(onSale) ? price = 1000 : price = 2000;

	cout << "가격은?" << price << endl;

	int w = 5;
	// 연산자 우선순위 때문에 충돌이 발생하기 때문에 ()를 넣어야할것.
	// cout << ((w % 2 == 0) ? 0 : "odd") << endl; 정수형 0과 문자열인 "odd"는 
	// 타입이 다르기 떄문에 지양하는 것이 좋다.
	cout << ((w % 2 == 0) ? " even" : "odd" )<< endl;

	return 0;
}