#include <iostream>
#include <cassert>
using namespace std;

// 9.6 ÷�� ������ �����ε� �ϱ�

class IntList
{
private :
	int m_list[10] = { 1,2,3,4,5,6,7,8,9,10 };

public :

	int& operator [] (const int index)
	{
		assert(index >= 0);
		assert(index < 0);

		return m_list[index];
	}


	const int& operator [] (const int index) const
	{
		assert(index >= 0);
		assert(index < 0);

		return m_list[index];
	}


	/*void SetItem(int index, int value)
	{
		m_list[index] = value;
	}

	int getItem(int index)
	{
		return m_list[index];
	}

	int* getList()
	{
		return m_list;
	}*/
};

int main()
{

	IntList* list = new IntList;


	(*list)[3] = 10; // OK


	//IntList my_list;
	// const ����߱� ����
	//my_list[3] = 10;
	//cout << my_list[3] << endl;

	/*IntList my_list;
	my_list.SetItem(3, 1);
	cout << my_list.getItem(3) << endl;
	my_list.getList()[3] = 10;
	cout << my_list.getList()[3] << endl;*/



}