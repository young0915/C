#include <iostream>

class InitArray
{
private :

	int m_length = 0;
	int* m_data = nullptr;

public :

	InitArray(const int& leghth) : m_length(leghth)
	{
		m_data = new int[leghth];
	}
	~InitArray()
	{
		if (m_data != nullptr)
		{
			delete m_data;
		}
	}


	void initalize()
	{

	}

	void remove(int index)
	{

	
	}

	void push_back(int value)
	{

	}
};

int main()
{

	return 0;
}