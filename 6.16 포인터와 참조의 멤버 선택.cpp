#include <iostream>

using namespace std;

// 6.16 포인터와 참조의 멤버 선택
// 구조체나 클래스에 대해서 사용할때는 포인터와 참조를 통해서 멤버를 접근이 가능하다.


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