#include <iostream>

using namespace std;


//6.18 보이드 포인터
// 제너릭 포인터라고 부르는데. 제너릭은 포괄적이다. -> 모든 데이터를 다 포괄적으로 다룰 수 있기 때문에 제너릭 포인트인것. 
enum Type
{
	INT,
	FLOT,
};
int main()
{
	int i = 5;
	float f = 3.0f;

	void* ptr = nullptr;


	// 이러면 어떠한 타입인지는 모름.
	// 포인터 연산이 불가능 하며 간접 참조가 불가능하다 한다면 static_cast활용
	// 간접 참조가 불가능하여 강제로 형 변환해야만 간접 참조가 가능
	ptr = &f;
	ptr = &i;
	// 3
	cout << *static_cast<float*>(ptr) << endl;


	Type type = INT;

	if (type == FLOT)
	{
		cout << *static_cast<float*>(ptr) << endl;
	}
	else if (type == INT)
	{
		cout << *static_cast<int*>(ptr) << endl;
	}

	return 0;
}