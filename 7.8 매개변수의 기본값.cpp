#include <iostream>

using namespace std;

// 7.8 매개변수의 기본값

//default parameter


void print(int x = 0 ,int  y =20,int z =30)
{
	cout << x << endl;
}

int main()
{

	/*
	10 
	0
	*/
	print(10);
	print();

	print(100, 200, 300);

	return 0;
}