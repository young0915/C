#include <iostream>

using namespace std;

// 6.11 메모리 동적 할당 new와 delete

// static 프로그램이 종료될때까지 계속 들고있는 메모리 변수
// 자동 메모리 할당 변수를 선언하거나 또는 정적 배열을 선언을 했을 때 블럭 밖으로 나가면 전부 사라지고 다시 메모리가 os로 할당이 됨
// 동적 메모리 할당 

int main()
{
	
	int array[100];

	// int var;
	// var = 7;
	int* ptr = new int{7};

	// 005A0F88
	cout << ptr << endl;
	// 7
	cout << *ptr << endl;

	// 메모리 반납.
	// 메모리 반납후 ptr을 호출시 이상한 값이 나온다.
	delete ptr;
	ptr = nullptr; // 아무 의미 없는값으로 의미한다.

	cout << "after delete " << endl;
	// 방어 코드
	if (ptr != nullptr)
	{
		cout << ptr << endl;
		cout << *ptr << endl;
	 }
	else
	{
		cout << " Could not value";
	}


	// 메모리 누수
	// 메모리 계속 만들기만함
	// while에서 발견될 수 있다.
	//

	return 0;
}