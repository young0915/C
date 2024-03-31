#include <iostream>
#include <cassert>
using namespace std;

//9.9 복사 생성자, 복사 초기화 반환값 최적화

class Fraction
{
private :
	int m_numberator;
	int m_denominator;




public : 
	Fraction(int num = 0, int den = 1) : m_numberator(num) , m_denominator(den)
	{
		assert(den != 0);
	}

	Fraction(const Fraction& fraction) // copy constructor
		: m_numberator(fraction.m_numberator), m_denominator(fraction.m_denominator)
	{
		cout << "Copy constructor called" << endl;
	}

	friend std::ostream& operator  << (std::ostream& out, const Fraction& f)
	{
		out << f.m_numberator << " / " << f.m_denominator << endl;
		return out;
	}

};



Fraction doSomething()
{
	Fraction temp(1, 2);
	return temp;
}


int main()
{
	Fraction frac(3, 5);

	// Fraction fr_copy(frac);
	Fraction fr_copy= frac;

	cout << frac << " " << fr_copy << endl;


	Fraction result = doSomething();

	cout << result << endl;
	/*
	Copy constructor called
	1 / 2
	*/




	/*
	Copy constructor called
	3 / 5
	3 / 5
	*/

	return 0;
}