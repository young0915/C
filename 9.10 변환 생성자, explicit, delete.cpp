#include <iostream>
#include <cassert>
using namespace std;


// 9.10 ��ȯ ������, explicit, delete
// explicit : ��ȯ �����ڸ� ��� ���ϰ� ���ƹ����� Ű����
// delete : Ư���� �����ڸ� ��� ���� ���ϰ� ���������� Ű����

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

	// deleteFuction �̱� ������ ����� �� ����.
	//Fraction frac2('c');


	// 7 / 1
	doSomething(Fraction(7));

}