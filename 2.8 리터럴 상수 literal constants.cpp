#include<iostream>
// 2.8 ���ͷ� ��� literal constants
// Binary Literals


int main()
{
	using namespace std;

	float pi = 3.14f;
	int  i = 1234;			// unsigned ���� �ٲٴ� ���̶� -1234u���� ���� ���� �ʴ�. 
	// -1234u �ͺ��ٴ� �˾ƺ��� ���� (unsinged int) ĳ�����ϴ� ���� ����.

	unsigned int n = 5u;
	long n2 = 5L;
	double d = 6.0e-10;


	// Decimal : 0 1 2 3 4 5 6 7 8 9 10
	// Octal : 0 1 2 3 4 5 6 7 10 11 12 13
	// Hexa : 0 1 2 3 4 5 6 7 8 9 A B C D E F 10
	// binary literal
	
	//int x = 012;	// -> 8����.  10
	//int x = 0xF;		// -> 16����. 15
	int x = 0b1010;

	cout << x << endl;

	// 0011 1010 1111 1111
	// 3A7F 

	int num_items = 123;
	int price = num_items * 10; // 10 is...
	//  literal constants�������Ͱ� ����� �޸� ������ ����Ű�� �̸��� ������ ���� �ʴ�.
	// ����ϴ� ���� �����Ѵ�. ���߿� �� ����� ��ȯ�� �� �ֱ� �����̴�.



	return 0;
}