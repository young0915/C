#include "Operators1.h"
#include <iostream>
#include <cmath>

// 관계 연산자 (Relation Operators)
// 주의사항
// flaot 부동 소수점끼리 비교하는 것(같냐 다르냐)
//

int main()
{
	using namespace std;


	while (true)
	{
		int x, y;
		cin >> x >> y;
		cout << "Your input values are : " << x << "   " << y << endl;


		if (x == y)
			cout << "equal" << endl;
		else if (x != y)
			cout << "Not equal" << endl;
		else if (x > y)
			cout << "x is greater than y" << endl;
		else if (x < y)
			cout << " x  is less than y" << endl;
		else if (x >= y)
			cout << " x  is grater than y or equal to y" << endl;
		else if (x <= y)
			cout << " x  is less than y or equal to y" << endl;


	}



	return 0;
}