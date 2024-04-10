#include <iostream>
#include <typeinfo>

//6.7 �������� �⺻���� ����

using namespace std;

// ���� ������ '����' �޸𸮸� ����ϰ� ���� �Ҵ� �޸𸮴� '��' �޸𸮸� ����մϴ�. 
// �ڼ��� ������ '���ð� ��'���� �ٷ�ϴ�.
// ū �޸𸮿� ����Ǿ� �ִ� �������߿��� �Ϻκ��� CPU�� ����ϱ� ���Ͽ� �޸𸮷κ��� ������ ���� 
// �޷ι� ��ü�� ��� �����鼭 ã�� ���� �ƴ϶� �ʿ��� �����Ͱ� ����Ǿ� �ִ� '�ּ�'�� ����Ͽ� ���� �����Ͽ� �����ɴϴ�.


// �޸��ּҸ� ��� ������ �����Ͷ�� �θ���,.

struct  Something
{
	int a, b, c, d;
};
int main()
{
	int x = 5;
	double d = 123.0;


	// �޸� �ּ� ��� & : address-of operator

	// de-reference operator (*)

	// �����͸� ����ϴ� ����
	// �޸� ���� ����
	// �����͸� ���� �ʱ�ȭ�� ������Ѵ�. �ּҰ��� ������ ���� ������ ������ �߻��Ѵ�.

	int* ptr_x = &x, * ptr_y = &x;

	cout << ptr_x << endl; // 012FF8A4
	cout << *ptr_x << endl; //5





	int* ptr_x_1;
	double* ptr_d;

	/*
	4
8
4 4
4 4
	*/
	// �ּҴ� �ּұ� ������ ���� �����Ǿ� �ִ�.
	cout << sizeof(x) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(x) << " " << sizeof(ptr_x) << endl;
	cout << sizeof(&d) << " " << sizeof(ptr_d) << endl;


	Something ss;
	Something* ptr_s;

	cout << sizeof(Something) << endl;	// 16
	cout << sizeof(ptr_s) << endl;		// 4


	return 0;
}