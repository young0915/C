#include "Operators1.h"
#include <iostream>
#include <cmath>

// ���� ������ (Relation Operators)
// ���ǻ���
// flaot �ε� �Ҽ������� ���ϴ� ��(���� �ٸ���)
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