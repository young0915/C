#include "Operator2.h"
#include <iostream>

// 3.6
// 논리연산자 Logical Operator
//// Logical AND가 OR보다 우선순위가 높다.

int main()
{
	using namespace std;

	cout << "  논리연산자 " << endl;

	// Logical AND
	bool x = true;
	bool y = false;

	cout << !x << endl;

	cout << (x && y) << endl;
	cout << (x || y) << endl;


	bool hit = true;
	int health = 10;

	if (hit&& health < 20)
	{
		cout << "die" << endl;
	}
	else
		health -= 20;

	// Logical OR

	int v = 1;

	if (v == 0 || v == 1)
	{
		cout << " v is 0 or 1" << endl;
	}

	// short circuit evaluation 
	//int x = 1;
	//int y = 2;

	//if (x == 1 && y++ == 2)
	//{
	//	// do something.

	//}

	//cout << y << endl;

	bool z = true;
	bool k = false;

	// XOR
	// false false flase
	// flase true true
	// true false true
	// true true false

	cout << " 숙제 " << endl;

	if ((true && true) || false)
	{
	}
	if ((false && true) || true)
	{

	}
	if ((false && true) || false || true)
	{

	}
	if ((14 > 13 || 2 > 1) && (9 > 1))
	{

	}
	if (!(2314123 > 2 || 123123 > 2387))
	{

	}


	bool v1 = true;
	bool v2 = false;
	bool v3 = false;

	bool r1 = v1 || v2 && v3;
	bool r2 = (v1 || v2) && v3;
	bool r2 = v1 || (v2 && v3);

	cout << r1 << endl;
	cout << r2 << endl;


	return 0;
}