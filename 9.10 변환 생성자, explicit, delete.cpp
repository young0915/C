#include <iostream>
#include <cassert>
using namespace std;


// 9.10 변환 생성자, explicit, delete
// explicit : 변환 생성자를 사용 못하게 막아버리는 키워드
// delete : 특정한 생성자를 사용 하지 못하게 지워버리는 키워드

class Fraction
{
private:
	int m_numberator;
	int m_denominator;

public:
	Fraction(char) = delete;


	explicit Fraction(int num = 0, int den = 1) : m_numberator(num), m_denominator(den)
	{
		assert(den != 0);
	}

	Fraction(const Fraction& fraction) // copy constructor 
		: m_numberator(fraction.m_numberator), m_denominator(fraction.m_denominator)
	{
		cout << "Copy constructor called" << endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Fraction& f)
	{
		out << f.m_numberator << " / " << f.m_denominator << endl;
		return out;
	}
};


void doSomething(Fraction frac)
{
	cout << frac << endl;
}


int main()
{

	// deleteFuction 이기 때문에 사용할 수 없음.
	//Fraction frac2('c');


	// 7 / 1
	doSomething(Fraction(7));

}