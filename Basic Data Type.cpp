// �⺻ �ڷ��� �Ұ�
// Basic Data Type
#include <iostream>

int main()
{
	using namespace std;

	bool bValue = true;
	//char chValue = 'A';
	char chValue = 65;
	float fValue = 3.141592f;
	double dValue = 3.141592;

	//cout << chValue << endl;
	cout << fValue << endl;
	cout << dValue << endl;

	auto aValue = 3.141592;
	auto aValue2 = 3.141592f;


	cout << sizeof(aValue) << endl;
	cout << sizeof(aValue2) << endl;

	// sizeof�� ũ�⸦ �� ���ִ� Ű�����̴�.


	// ���� �ʱ�ȭ 3����
	int i = (int)3.1415;  //copy initialization :
	int a(123);		     // direct initialization :
	int b{ 123 };		     // uniform initialization :  ���� �ʱ�ȭ �� ���� �ʱ�ȭ�� �Ϻ� Ÿ���� ������ ���ؼ��� �۵��Ѵ�. �Ǽ��� �����͸� �߰��ϴ� ��� ���� �������� �ƴ� ���� ������ �� ���ٰ� ���� ���.
	// �� ������ ��� ������ Ÿ�Կ� �ʱ�ȭ ���� �Ҽ����� ��Ȳ�� �� copy initialization,  direct initialization�� ��� ������ uniform initialization�� 
	// ������ ���.

     // direct initialization : �����Ϸ��� � �̸��� �����̰� � �̸��� �Լ����� �� �����Ͽ� ����� ��������.
	// �ʱ�ȭ�� �Ҵ��� �����ϴ� ���� ������ �ȴ�.
	 // uniform initialization :  ���� �ʱ�ȭ �� ���� �ʱ�ȭ�� �Ϻ� Ÿ���� ������ ���ؼ��� �۵��Ѵ�. �Ǽ��� �����͸� �߰��ϴ� ��� ���� �������� �ƴ� ���� ������ �� ���ٰ� ���� ���.


	int k, l, m = 123;


	return 0;
}