#include <iostream>

using namespace std;

// 8.3 ������ Constructors


class Fraction
{
private:
	int m_numberator;
	int m_demoninator;




public:

	// �ּ� ó���ϰ� �ȴٸ� ����Ʈ�� Fraction�� ����.
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

	// 	Fraction frac(1, 5)�� Fraction frac1{ 1,5} ���� 
	Fraction frac(1, 5);
	Fraction frac1{ 1,5};// Uniform Initialization Ÿ�� ��ȯ�� ���Ѵ�.

	frac.print();
	frac1.print();


	// Second �� ���� ȣ��� ������ FirstŬ�������� Second�� ���� �����߱� �����̴�.
	First fir;


	return 0;
}