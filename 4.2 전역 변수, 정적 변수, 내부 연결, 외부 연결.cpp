#include <iostream>
#include "4.2 ��������, ��������, ���� ����, �ܺ� ���� MyConstant.h"

// Global Variable ��������
// Static Variable ���� ����
// Internal Linkage ���� ����
// External Linkage �ܺ� ����

// ���������� ���������� ���������� �����ϴ�.

using namespace std;

// ��������
// ���� ������ ����Ѵٸ� �ٸ� ���Ͽ��� ������ �� �� �ֱ� ������.
// �ٸ� �����ڿ� ����ϸ鼭 ȥ���� �� �� �ִ�.
int value = 123;

void doSomething()
{
	// static�� ���� Ư¡
	// �ʱ�ȭ�� �ؾ��Ѵ�. �̸� �����ؾ���.
	// static�� �� �̱���.
	// �޸� �������� ���ٸ�. �� ���ȿ��� �ݺ��Ǹ鼭 ���Ǵ� �޸𸮸�
	// �������� ���� �ּ� ���� �޸𸮸� �����Ѵ�.

	static int a = 1;
	++a;

	cout << a << endl;
}


// Linkage
// ���������� Linkage�� ����.
// Internal Linkage ���� C++������ ������ �� �ִ� ���������� �ǹ��Ѵ�.


// forward declaration.
extern void doSomething1();
extern int a;
//extern int a =456;
// extern�� ����Ѵٸ�
// �ʱ�ȭ�� �Ѵ�.
// ���� �����ϸ� �ȵȴ�.
// ���� C++ ���Ͽ����� ����� �� �ִ� ����.


/*
* 
* int g_x; // ���⼭ g�� global -> external linkage : �ʱ�ȭ�� �ȵǴ� ��������
* static int g_x; // internal linkage : �ٸ� cpp ���Ͽ��� �������� ���ϵ��� ��������.
* 
*/

int main()
{
	cout << value << endl;			// 123

	// ��������
	int value = 1;

	cout << ::value << endl;;		// 123
	cout << value << endl;			// 1


	doSomething();					// 2
	doSomething();					// 3


	doSomething1();

	cout << "In main.cpp " << Constants::pi << " " << &Constants::pi << endl;

	return 0;
}