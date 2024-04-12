#include <iostream>

using namespace std;
// 8.7 this 포인터와 연쇄 호출

class Simple
{
public:
	Simple(const int& in_id) : m_id(in_id) { SetId(in_id); }
	~Simple()
	{ 
	
	}

	void SetId(int id) 
	{ 
		m_id = id;

		// 사용법 예.
		this->SetId(id);
		(*this).SetId(id);
		this->m_id;

		/*
		00F7F834
		00F7F828
		00F7F834
		00F7F828		
		*/
		cout << this << endl;
	}
	int getID() { return m_id; }
	

private:
	int m_id;
};


class Calc
{
public:
	Calc(const int& in_value) : m_value(in_value)
	{
	
	}
	~Calc() {}


	Calc& add(int value) { m_value += value; return *this; }
	Calc& sub(int value) { m_value -= value; return *this;}
	Calc& mult(int value) { m_value *= value; return *this;}
	Calc& div(int value) {m_value /=value; return *this;}

	void print()
	{
		cout << m_value << endl;
	}
private:
	int m_value;
};


int main()
{

	//Simple s1(1), s2(2);

	//s1.SetId(2);
	//s2.SetId(4);

	//// 00F7F834 00F7F828
	//cout << &s1 << " " << &s2 << endl;


	Calc cal(10);
	// 38
	cal.add(10).sub(1).mult(2).print();


	return 0;
}