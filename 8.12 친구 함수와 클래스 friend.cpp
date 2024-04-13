#include <iostream>

using namespace std;


// 8.12 ģ�� �Լ��� Ŭ���� friend
// Ư�� Ŭ������ private�� ������ �����ϸ�


class B;
// friend Ű���带 ����Ҷ� ���� ������ ������.
class A
{
public:
	A();
	~A();

private:
	int m_value = 1;

	friend void doSomething(A& a, B& b);

};


class B
{
private :
	int m_value = 2;
	friend void doSomething(A& a, B& b);
};

void doSomething(A& a, B& b)
{
	cout << a.m_value <<" "<< b.m_value << endl;
}

int main()
{
	A a;
	doSomething(a);

	return 0;
}