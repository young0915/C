#include <iostream>
// 3.3 증감 연산자 increment decrement operators

int add(int a, int b)
{
	return a + b;
}



int main()
{
	using namespace std;

	int x = 6, y = 6;
	cout << x << " " << y << endl;		// -> x : 6  y : 6
	cout << x++ << " " << y-- << endl;	// -> x : 6  y : 6
	cout << x << " " << y << endl;		// -> x :  7 y : 5
	cout << ++x << " " << --y << endl;	// -> x : 8  y : 4
	cout << x << " " << y << endl;		// -> x :  8 y : 4

	// ++x 전위증가, --y 전위감소
	// x++ 후위증가, y-- 후위감소

	// ========== 쓰지말아야할 것==============
	int c = 1;
	int v = add(c, ++c);		// 함수안에 후위 증가 하지 말것. 특히 변수 하나로 사용할 때 

	cout << v << endl; // 4 -> 컴파일러가 정의가 안되기 때문에 

	// undefined -> 명확하게 정의가 안되기 때문에 쓰지 말것.
	int d = 1;
	d = d++; // -> d++로 사용할것.
	cout << c << endl;
	
	return 0;
}
