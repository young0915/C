#include <iostream>

using namespace std;

int generatorID()
{
	static int s_id = 0;
	return ++s_id;
}
class Someting
{
public :
	class _init
	{
	public:
		_init() { s_value = 1024; }

	private:

	};

public:

	static _init s_init;

	Someting() : m_value(123){}

	static int s_value;
	int m_value;

	int  getValue()
	{ 
		return s_value;
	}

	int temp()
	{
		return this->s_value;
	}
	int temp() { return 1; }



};

Someting::_init Someting::s_init;



int main()
{

	/*
	1
	2
	3
	*/


	cout << generatorID() << endl;
	cout << generatorID() << endl;



	cout << generatorID() << endl;

	Someting s1;
	Someting s2;

	s1.s_value = 2;

	cout << &s1.s_value << " " << s1.s_value << endl;
	cout << &s2.s_value << " " << s2.s_value << endl;


	Someting s3;

	cout << s3.getValue() << endl;




	return 0;
}