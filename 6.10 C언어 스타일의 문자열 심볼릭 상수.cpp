#include <iostream>

using namespace std;

const char* getName()
{
	return "Jack Jack";
}

int main()
{
	char name[] = "Jack Jack"; // �����Ϳ� ���� �� ����. �����ʹ� �ּҸ� ��� �����̴ϱ�
	//������ �̷��Դ� ����� �� �ִ�.
	const char* name_s = "Jack Jack";
	const char* name_s1 = "Jack Jack";

	const char* name_s2 = getName();


	//Jack Jack
	cout << name << endl;
	//Jack Jack
	cout << name_s << endl;
	//Jack Jack
	cout << name_s2 << endl;



	/*
	13630580
	4823856
	4823856
	4823856
	*/
	cout << (uintptr_t)name << endl;
	cout << (uintptr_t)name_s << endl;
	cout << (uintptr_t)name_s1 << endl;
	cout << (uintptr_t)name_s2 << endl;

	int int_arr[5] = { 1,2,3,4,5 };


	char c = 'Q';
	// null�� ���ö� ���� ��� ������ ���輺�� ���� -> *(&c)�� ���ľ���

	/*
	Q��������
	Q
	*/
	cout << &c << endl;
	cout << *(&c) << endl;

	return 0;
}
