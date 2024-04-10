#include <iostream>

using namespace std;

// 6.16 �����Ϳ� ������ ��� ����
// ����ü�� Ŭ������ ���ؼ� ����Ҷ��� �����Ϳ� ������ ���ؼ� ����� ������ �����ϴ�.


struct  Person
{
	int age;
	double weight;
};

int main()
{

	Person person;

	person.age = 5;
	person.weight = 5;


	Person& ref = person;
	ref.age = 15;

	Person* ptr = &person;
	ptr->age  = 30;
	(*ptr).age = 20;

	Person& ref2 = *ptr;
	ref2.age = 45;


	/*
	004FF8F0
	004FF8F0
	*/
	cout << &person << endl;
	cout << &ref2 << endl;


	return 0;
}