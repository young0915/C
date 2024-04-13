#include <iostream>

using namespace std;

// 8.9 클래스와 const
class Something
{
public:
	Something() 
	{
		cout << "constructor" << endl;
	}
	~Something() {}

	int m_value = 0;

	void SetValue(int value) 
	{ 
		m_value = value;
	}
	int GetValue() const
	{ 
		return m_value;
	}

};


void Print(Something st)
{

	// 00EFFA4C
	cout << &st << endl;
	cout << st.m_value << endl;
}

int main()
{
	const int i = 0;
	const Something someting;


	// 009EFD64 -> 값이 다른 이유는 클래스에 복사된 기본값이  들고 있기 때문
	cout << &someting << endl;
	cout << someting.GetValue() << endl;


	Print(someting);



	return 0;
}