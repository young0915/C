#include <iostream>

using namespace std;

//7.1 �Ű������� �������� ����

int foo(int x, int y);

int foo(int x, int y)
{
	return x + y;
}

//7.2 ���� ���� ���� ->�μ���y ���� ����Ǿ� �Ű��������� �Ѱ����� ���� ���� ���� �μ� ���� (call by value) 
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