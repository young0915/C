#include <iostream>


// mainpro1���� LIKE_APPLE ȣ���� ������ �� ����� Orange�� �Ǿ����� 
// mainpro1���� define���� ȣ��Ǿ� ���� �ʱ� �����̴�.

void doSomething()
{
	using namespace std;

#ifdef  LIKE_APPLE
	cout << "Apple" << endl;
#else
	cout << "Orange" << endl;
#endif //  LIKE_APPLE
}


//Mainpro1
#include <iostream>
#include <algorithm>			// std::max ����ϱ� ���� �������.
using namespace std;

#define MY_NUMBER 9
#define MAX(a,b) (a>b)  ? a:b
#define LIKE_APPLE
// ��ũ�ζ� ȣ���ϸ� ������ ���� ������ Ű����. 

void doSomething();

int main()
{

	cout << MY_NUMBER << endl;
	cout << std::max(1 + 3, 2) << endl;

	doSomething();

	return 0;
}