#include <iostream>
#include "4.2 ��������, ��������, ���� ����, �ܺ� ���� MyConstant.h"

using namespace std;

extern int a =123; // -> �ʱ�ȭ�� �������.


void doSomething1() // �Ӹ�.
{
	// ��ü.
	cout << "hi" << endl;
	cout << "In ext.cpp " << Constants::pi << " " << &Constants::pi << endl;


}