#include <iostream>
#include <typeinfo>

// �Ͻ��� ����ȯ�� ����� ����ȯ
// Implicit Type Conversion(coersion) -> �����Ϸ��� �˾Ƽ� ����ȯ�ϴ� ��.
// Explicit Type Conversion(casting)


int main()
{
	using namespace std;


	int a = 123;
	cout << typeid(a).name() << endl;
	// typeid ���� ����ϰ� �ִ� ������ Ÿ���� �������� Ȯ�� �Ҷ� ��� ������ Ű����
	
	// numeric conversion
	// ū ���� ���� ������ or type�� �ٲ�� �ܿ�
	// ������ �ս� ������.
	int i = 30000;
	char c = i;

	//cout << c << endl; // numeric conversion �߻�.
	//cout < static_cast<int>(c) << endl;

	float b = 1.0f; // ���� ���� ū������.
	double d = a; //	numeric promotion �� �ڷ����� ���� �� ū ������ �ڷ����� ������ 
	// ��ȯ�ϴ� ���
	//




	return 0;
}