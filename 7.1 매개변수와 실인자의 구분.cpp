#include <iostream>

using namespace std;

//7.1 매개변수와 실인자의 구분

int foo(int x, int y);

int foo(int x, int y)
{
	return x + y;
}

//7.2 값에 의한 전달 ->인수의y 값이 복사되어 매개변수에게 넘겨지는 것을 값에 의한 인수 전달 (call by value) 
void doSomething(int y)
{
	//  In func 5 00DEF8BC
	cout << " In func " << y << " " << &y << endl;
}

int main()
{
	int x = 1, y = 2;

	foo(6, 7);			//  6, 7 : arguments ( actual parameters)
	foo(x, y+1);

	doSomething(5);

	int z = 6;
	// in main6 00DEF990
	cout << "in main" << z << " " << &z << endl;


	return 0;
}