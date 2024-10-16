#include <iostream>
using namespace std;
#include <vector>
#include <queue>


// 함수 객체 
// 함수 포인터의 안 맞으면 사용X
// - 시그니처가 안 맞으면 사용X 
// - 상태를 가질 수 없음.

class Functor
{
public : 
	void AddValue(int value)
	{
		_value += value;
	}

	int operator+(int value)
	{
		return (_value + value);
	}


	void operator()()
	{
		cout << "Functor Test" << endl;
		cout << _value << endl;
	}


	void operator()(int n)
	{
		cout << "Functor Test" << endl;
		cout << _value +n << endl;
	}

public :
	int _value = 10;
};

struct  AddStruct
{
public :
	int operator()(int a, int b)
	{
		return a + b;
	}
};

using FuncType = int(*)(int, int);

template<typename T>
//int DoSomething(int a, int b, FuncType func) -> FuncType 대신 T로 바꿀것.
int DoSomething(int a, int b, T func)
{
	return func(a, b);
}

class Job
{
public:
	Job() {}
	// 부모클래스에 virtual키워드 들어가는 건 필수 이유는 
	// 크래시 이슈
	// 자식 클래스에서 소멸자 호출이 안됨
	// 자식 클래스에서 실행이 안된다.
	// Job* job = new MoveJob(10, 20); -> 이런 이슈를 해결하기 위한것.
	virtual ~Job() {}
};
class MoveJob : public Job
{
public: 
	MoveJob(int x, int y) :x(x), y(y) {}

	void operator()()
	{
		cout << " " << endl;
	}
public : 
	int x;
	int y;
};

class AttackJob : public Job
{
public:

};

int main()
{
	Functor test;

	cout << test + 10 <<endl;

	test();
	test(10);


	AddStruct func;
	DoSomething(10, 20, func);

	// 클라 : (10,20) 좌표로 이동할래?
	Job* job = new MoveJob(10, 20);
	//
	delete job;
	AttackJob* attackJob = new AttackJob();
 }
