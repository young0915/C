#include <iostream>

using namespace std;


// 8.6 ¼Ò¸êÀÚ destructor

class Simple
{
public:
	Simple(const int& id_in) : m_id(id_in) 
	{
		cout << "Constructor" << m_id << endl;

	}
	~Simple() 
	{
		cout << "Destructor" << endl;
	}

private:

	int m_id;

};



int main()
{


	/*
	
	Constructor0
	Constructor1
	Destructor
	Destructor
	*/
	Simple s1(0);
	Simple s2(1);

	return 0;
}