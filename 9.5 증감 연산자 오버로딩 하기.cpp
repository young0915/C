#include <iostream>
using namespace std;
// 9.5 증감 연산자 오버로딩 하기


class Digit
{
private : 
	int m_digit;

public :
	Digit(int digit =0) : m_digit(digit) {}

	friend ostream & operator << (ostream &out, const Digit& d)
	{
		out << d.m_digit;
		return out;
	}



	// 외우셈
	// 
	// prefix
	Digit& operator  ++ ()
	{
		++m_digit;
		return *this;
	}


	// postfix
	Digit operator ++ (int)
	{

		Digit temp(m_digit);
		++(*this);
		return temp;
	}

};


int main()
{

	Digit d(5);

	cout << ++d << endl; // 6
	cout << d << endl; // 6


	cout << d++ << endl; // 6
	cout << d << endl; // 7



	/*
	11
11
11
12

	int a = 10;

	cout << ++a << endl;
	cout << a << endl;
	cout << a++ << endl;
	cout << a << endl;

	
	*/



	return 0;
}