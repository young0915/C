#include <iostream>

using namespace std;

class Cents
{
private :

	int m_cnet;

public :

	Cents(int cents = 0)
	{
		m_cnet = cents;
	}

	int getCents() { return m_cnet; }
	void setCents(int cents) { m_cnet = cents; }

	operator int()
	{
		cout << " cash here" << endl;
		return m_cnet;
	}
};


class Dollar
{
private :
	int m_dollar = 0;

public :

	Dollar(const int& input) : m_dollar(input) {}

	operator Cents()
	{
		return Cents(m_dollar * 100);
	}
};

void PrintInt(const int &value)
{
	cout << value << endl;
}

int main()
{
	/*Cents cents(7);

	int value = (int)cents;
	value = (int)cents;
	value = static_cast<int>(cents);

	PrintInt(cents);*/


	Dollar dollar(2);

	Cents cents = dollar;

	PrintInt(cents);

	/*
	 cash here
	200
	
	*/


	return 0;
}