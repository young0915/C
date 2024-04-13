#include <iostream>

using namespace std;


// 8.13 익명 객체
// 변수명이 없기 때문에 두번 세번 사용할 수가 없고 오직 한번만 사용을 하고 그다음에 사라진다.

class A
{
public:
	int m_value;

	A(const int& value ) : m_value(value)
	{
		cout << "Constructor" << endl;
	}
	~A()
	{
		cout << "Desstructor" << endl;

	}

	void print()
	{
		cout << " Hello " << endl;
	}

private:

};

class Cents
{
public:
	Cents(int cents)
	{
		m_cents = cents;
	}

	int getCents() const { return m_cents; }

private:
	int m_cents;
};

Cents add(const Cents& c1, const Cents& c2)
{
	return Cents(c1.getCents() + c2.getCents());
}


int main()
{
	A a(1);

	a.print();

	A(2).print();



	// 14
	cout << add(Cents(6), Cents(8)).getCents();

	return 0;
}