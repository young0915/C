#include <iostream>

using namespace std;

// 8.3 생성자 Constructors


class Fraction
{
private:
	int m_numberator;
	int m_demoninator;




public:

	// 주석 처리하게 된다면 디폴트인 Fraction로 생성.
	Fraction(const int& num_in, const int& demon);
	~Fraction();

	void print()
	{
		cout << m_numberator<< "/" << m_demoninator << endl;
	}


};

Fraction::Fraction(const int& num_in, const int& demon)
{
	m_numberator = num_in;
	m_demoninator = demon;
}

Fraction::~Fraction()
{
}



class First
{
public:
	First();

private:
	Second sec;

};

First::First()
{
	cout << "class First constructor()" << endl;

}


class Second
{
public:
	Second();

private:

};

Second::Second()
{
	cout << "class Second constructor()" << endl;
}


int main()
{

	// 	Fraction frac(1, 5)와 Fraction frac1{ 1,5} 차이 
	Fraction frac(1, 5);
	Fraction frac1{ 1,5};// Uniform Initialization 타입 변환을 안한다.

	frac.print();
	frac1.print();


	// Second 가 먼저 호출된 이유는 First클래스에서 Second를 먼저 선언했기 때문이다.
	First fir;


	return 0;
}