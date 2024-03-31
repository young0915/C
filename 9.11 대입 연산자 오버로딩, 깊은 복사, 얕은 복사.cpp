#include <iostream>
#include <cassert>

using namespace std;
//9.11 대입 연산자 오버로딩, 깊은 복사, 얕은 복사

// 대입 연산자 오버로딩
// 깊은 복사 : 
// 얕은 복사

class MyString
{
public:
	char *m_data = nullptr;
	int m_length = 0;

public:

	MyString(const char* source = "")
	{
		assert(source);

		m_length = std::strlen(source) + 1;
		m_data = new char[m_length];

		for (int i = 0; i < m_length; i++)
		{
			m_data[i] = source[i];
		}

		m_data[m_length - 1] = '\n';
	}

	// 자신이 구현한 복사 생성자를 쓰지 않을 바에는 아예 생성자를 쓰면 안된다 라고 막아버리는 것은.
	// delete 키워드를 사용하는 것이다.
	//MyString(const MyString& source) = delete;

	MyString(const MyString &source)
	{
		cout << "Copy constructor" << endl;

		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			m_data = new char[m_length];

			for (int i = 0; i < m_length; ++i)
			{
				m_data[i] = source.m_data[i];
			}
		}
		else
		{
			m_data = nullptr;
		}

	
	}


	MyString& operator = (const MyString& source)
	{
		cout << "Assigment operator" << endl;

		// shallow copy 
		/*this->m_data = source.m_data;
		this->m_length = source.m_length;*/


		if (this == &source) // prevent self - assignment
			return *this;

		delete[] m_data;

		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			m_data = new char[m_length];

			for (int i = 0; i < m_length; ++i)
			{
				m_data[i] = source.m_data[i];
			}
		}
		else
		{
			m_data = nullptr;
		}

		return *this;
	}


	~MyString()
	{
		delete[] m_data;
	}

	char* getString() { return m_data; }
	int getLength() { return m_length; }

};


int main()
{
	MyString hello("Hello");

	// Copy constructor
	//	Assigment operator
	MyString str1(hello);	// MyString str1 = hello;

	MyString str2;
	str2 = hello;

	// 
	/*
	00A5E5B0
Hello
羲羲硼硼硼U?╃
Copy constructor
00A5EAB8
Hello
羲羲
Hello
羲羲硼硼硼U?╃

	*/
	/*cout << (int*)hello.m_data << endl;
	cout << hello.getString() << endl;

	{
		MyString copy = hello;
		cout << (int*)copy.m_data << endl;
		cout << copy.getString() << endl;
	}

	cout << hello.getString() << endl;*/

	return 0;
}






