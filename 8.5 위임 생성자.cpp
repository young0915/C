#include <iostream>
#include <string>

using namespace std;

// 8.5 위임 생성자

class Student
{

private:
	static int m_id;
	string m_name;

public:
	Student(const int& id_in, const string& name_in) : m_name(name_in) {}
	~Student() {}

	void print()
	{
		cout << m_id << " " << m_name << endl;
	}


};




int main()
{

	Student st1(0, "Jack");
	st1.print();
	return 0;
}