#include <iostream>
#include <string>

//
// 여러 데이터들을 하나의 자료형처럼 사용하는 것을 구조체라고 한다.
//

using namespace std;

void PrintPerson(double height, float weight, int age)
{

}


struct Person
{
	double height;
	float weight;
	int age;
	string name;

	void print()
	{
		cout << height << " " <<weight << " " << age << " " <<name;
		cout << endl;

	}

};


struct Family
{
	Person me, mom, dad;
};


void PrintPerson(Person Person_to_print)
{

	cout << Person_to_print.height << " " << Person_to_print.weight << " " << Person_to_print.age << " " << Person_to_print.name;
	cout << endl;

}


struct Employee				// 2 +(2) +4 + 8 =14
{
	short id;				// 2 byte +(2)		// padding
	int age;				// 4 byte
	double wage;			// 8 byte
};


int main()
{

	Person me {2.0, 100.0, 20, "Jack Jack"};			// Uniform Initialization을 사용하는 것이 유용하다.

	Person me2;

	me2 = me;
	me2.print();
	me.print();
	//PrintPerson(me);


	Employee emp1;

	cout << sizeof(emp1) << endl;


	return 0;
}