#include <iostream>

using namespace std;


// ���� ������ �����ε�

class Cents
{
private :

	int m_cents;

public :
	Cents(int cents = 0) { m_cents = cents; }

	int getCents() const { return m_cents; }
	int& getCents() { return m_cents;
	}


	friend std::ostream& operator << (std::ostream& out, const Cents& cents)
	{
		out << cents.m_cents;
		return out;
	}


	Cents operator - () const
	{
		return Cents(-m_cents);
	}


	bool operator ! () const
	{
		return (m_cents == 0) ? true : false;
	}
};


int main()
{
	Cents cents1(6);
	Cents cents2(0);


	/*cout << cents1 << endl;
	cout << -cents1 << endl;
	cout << -Cents(-10) << endl;*/


	// 0 1
	cout << !cents1 << " "<< !cents2;



	return 0;
}