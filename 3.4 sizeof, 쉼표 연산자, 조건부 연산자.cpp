#include <iostream>

// sizeof
// ��ǥ ������. Comma Oerator
// ����(��) ������. Conditional Operator

int main()
{
	using namespace std;

	float a;

	sizeof(a);  // -> 4 byte.


	// comma operator 

	int x = 3;
	int y = 10; 
	int z = (++x, ++y); // �޸� �����ڶ� 
	// �޸� ������ Ǯ��.
	++x;
	++y;
	int z = y;
	// �׷��� z�� y������ ��µȴ�.

	cout << x << " " << y << " " << z << endl;
	// x : 4 y : 11 z : 11

	// Comma operator�� ���ǻ���

	int a = 1, b = 10;
	int z;


	z = a, b;  // ,�����ڸ� ����Ѵٸ� , a ���� �켱������ �Ǿ� 
	// z�� a���� ���´�. 

	cout << z << endl;

	// conditional operator ���� ������.
	// ���׿�����.
	// ���ǻ��� : �����ϰ� ���ٸ� ���� �� ��. ���߿� �ڵ� ���� ����� ��������.

	bool onSale = true;

	int price;


	(onSale) ? price = 1000 : price = 2000;

	cout << "������?" << price << endl;

	int w = 5;
	// ������ �켱���� ������ �浹�� �߻��ϱ� ������ ()�� �־���Ұ�.
	// cout << ((w % 2 == 0) ? 0 : "odd") << endl; ������ 0�� ���ڿ��� "odd"�� 
	// Ÿ���� �ٸ��� ������ �����ϴ� ���� ����.
	cout << ((w % 2 == 0) ? " even" : "odd" )<< endl;

	return 0;
}