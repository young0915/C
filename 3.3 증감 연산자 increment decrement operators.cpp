#include <iostream>
// 3.3 ���� ������ increment decrement operators

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

	// ++x ��������, --y ��������
	// x++ ��������, y-- ��������

	// ========== �������ƾ��� ��==============
	int c = 1;
	int v = add(c, ++c);		// �Լ��ȿ� ���� ���� ���� ����. Ư�� ���� �ϳ��� ����� �� 

	cout << v << endl; // 4 -> �����Ϸ��� ���ǰ� �ȵǱ� ������ 

	// undefined -> ��Ȯ�ϰ� ���ǰ� �ȵǱ� ������ ���� ����.
	int d = 1;
	d = d++; // -> d++�� ����Ұ�.
	cout << c << endl;
	
	return 0;
}
