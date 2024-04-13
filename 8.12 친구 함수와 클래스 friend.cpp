#include <iostream>

using namespace std;


// 8.12 친구 함수와 클래스 friend
// 특정 클래스의 private도 접근이 가능하며


class B;
// friend 키워드를 사용할때 전방 선언이 가능함.
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