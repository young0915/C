#include <iostream>
#include <typeinfo>

// 암시적 형변환과 명시적 형변환
// Implicit Type Conversion(coersion) -> 컴파일러가 알아서 형변환하는 것.
// Explicit Type Conversion(casting)


int main()
{
	using namespace std;


	int a = 123;
	cout << typeid(a).name() << endl;
	// typeid 현재 사용하고 있는 데이터 타입이 무엇인지 확인 할때 사용 가능한 키워드
	
	// numeric conversion
	// 큰 것을 작은 곳으로 or type이 바뀌는 겨웅
	// 데이터 손실 가능함.
	int i = 30000;
	char c = i;

	//cout << c << endl; // numeric conversion 발생.
	//cout < static_cast<int>(c) << endl;

	float b = 1.0f; // 작은 것이 큰것으로.
	double d = a; //	numeric promotion 한 자료형의 값이 더 큰 유사형 자료형의 값으로 
	// 변환하는 경우
	//




	return 0;
}