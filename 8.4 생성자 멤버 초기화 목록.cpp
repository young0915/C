#include <iostream>

using namespace std;


class Something
{
public:
	Something() : m_i(1), m_d(3.14), m_c('a'), m_arr {1,2,3,4,5}, m_b(1024)
	{

	}
	~Something();

	void print()
	{

		/*
		1 3.14 a
		1 2 3 4 5
		*/ 
		cout << m_i << " " << m_d << " " << m_c << endl;

		for (auto& e : m_arr)
			cout << e << " ";
		cout << endl;
	}

private:
	int m_i;
	double m_d;
	char m_c;
	int m_arr[5];
	B m_b;
};

Something::~Something()
{
}



class B
{
private :
	int m_b;

public:
	B(const int& m_b_in) 
		: m_b(m_b_in)
	{}

};
int main()
{

	Something st;
	st.print();
	return 0;
}