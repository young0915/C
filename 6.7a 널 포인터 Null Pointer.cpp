#include <iostream>

using namespace std;
//6.7a �� ������ Null Pointer
// �Լ� �Ķ���ͷ� ����� �� ������

void doSomething(double* ptr)
{
	// �޸𸮰��� �ٽ� ���� �Ǿ �ٸ������� ��µ�.
	//  address of pointer varaible in doSomething () 00CFF9E0
	cout << " address of pointer varaible in doSomething () " << &ptr << endl;

	if (ptr != nullptr)
	{
		// do something useful
		cout << *ptr << endl;

	}
	else
	{
		// do nothing with ptr
		cout << " Null ptr, do nothing" << endl;
	}
}


int main()
{
	double* ptr = nullptr;	// moder c++ 


	//Null ptr, do nothing
	doSomething(ptr);
	//		Null ptr, do nothing
	doSomething(nullptr);

	double d = 3.14;
	// 3.14
	doSomething(&d);

	ptr = &d;
	// 3.14
	doSomething(ptr);


	// ����
	// null pointer�ۿ� �� ����. 
	// ���� �Լ� �Ķ���Ϳ��� �ʿ��� ��찡 ���� 
	nullptr_t nptr; 
	// address of pointer varaible in main () 00CFFAD0
	cout << " address of pointer varaible in main () " << &ptr << endl;

	return 0;
}