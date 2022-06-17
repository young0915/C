// 기본 자료형 소개
// Basic Data Type
#include <iostream>

int main()
{
	using namespace std;

	bool bValue = true;
	//char chValue = 'A';
	char chValue = 65;
	float fValue = 3.141592f;
	double dValue = 3.141592;

	//cout << chValue << endl;
	cout << fValue << endl;
	cout << dValue << endl;

	auto aValue = 3.141592;
	auto aValue2 = 3.141592f;


	cout << sizeof(aValue) << endl;
	cout << sizeof(aValue2) << endl;

	// sizeof란 크기를 알 수있는 키워드이다.


	// 변수 초기화 3가지
	int i = (int)3.1415;  //copy initialization :
	int a(123);		     // direct initialization :
	int b{ 123 };		     // uniform initialization :  복사 초기화 및 직접 초기화는 일부 타입의 변수에 대해서만 작동한다. 실수형 데이터를 추가하는 경우 정수 변수값이 아닌 값을 포함할 수 없다고 에러 뜬다.
	// 이 세가지 모두 데이터 타입에 초기화 값이 소수점인 상황일 때 copy initialization,  direct initialization는 경고가 뜨지만 uniform initialization은 
	// 에러가 뜬다.

     // direct initialization : 컴파일러는 어떤 이름이 변수이고 어떤 이름이 함수인지 잘 추적하여 제대로 컴파일함.
	// 초기화와 할당이 구분하는 데도 도움이 된다.
	 // uniform initialization :  복사 초기화 및 직접 초기화는 일부 타입의 변수에 대해서만 작동한다. 실수형 데이터를 추가하는 경우 정수 변수값이 아닌 값을 포함할 수 없다고 에러 뜬다.


	int k, l, m = 123;


	return 0;
}