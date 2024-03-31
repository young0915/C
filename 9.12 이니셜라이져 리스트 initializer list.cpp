#include <iostream> 
#include <cassert>
#include <initializer_list>

using namespace std;


// 9.12 이니셜라이져 리스트 initializer list

class IntArray
{
private :
	unsigned m_length = 0;
	int* m_data = nullptr;


public :
	IntArray(unsigned length) : m_length(length)
	{
		m_data = new int[length];
	}

	IntArray(const std::initializer_list<int> &list) : IntArray(list.size())
	{

		int count = 0; 
		for (auto & element : list)
		{
			m_data[count] = element;
			++count;
		}

		//for (unsigned count = 0; count < list.size(); +count)
		//{
		//	m_data[count] = list[count]; //error;
		//}


	}

	~IntArray()
	{
		delete[] this->m_data;
	}

	// TODO : overload operator = 

	friend ostream& operator <<(ostream& out, IntArray& arr)
	{
		for (unsigned i = 0; i < arr.m_length; i++)
			out << arr.m_data[i] << " ";
		out << endl;

		return out;
	}

};


int main()
{
	int my_arr1[5] = { 1,2,3,4,5 };
	int* my_arr2 = new int[5]{ 1,2,3,4,5 };

	auto il = { 10, 20, 30 };

	IntArray int_arry { 1,2,3,4,5 };
	cout << int_arry << endl;

	return 0;

}