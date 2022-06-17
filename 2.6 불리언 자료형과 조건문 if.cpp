#include <iostream>
//불리언 자료형과 조건문 if

bool isEqual(int a, int b)
{
	bool result = (a==b);

	return result;
}


int main()
{
	using namespace std;

	bool b1 = true;					// copy initialization.
	bool b2(false);					// direct initialization.
	bool b3{ false };				// uniform initialization

	b3 = false;


	cout << std::boolalpha;
	cout << std::noboolalpha;
	cout << b3 << endl;			// 0
	cout << b1 << endl;			// 1


	cout << (true && true) << endl;
	cout << (true || false) << endl;
	cout << (false || true) << endl;
	cout << (false || false) << endl;

	if (true)
	{
		cout << "This is true" << endl;
	}
	else
	{
		cout << "This is false" << endl;
	}


	cout << std::boolalpha;
	cout << isEqual(1, 1) << endl;
	cout << isEqual(0, 3) << endl;


	if (5) // 0이면 false  1이상부터는 true
	{
		cout << "true" << endl;
	}
	else
		cout << "false" << endl;


	bool b;

	cin >> b;
	cout << " Your input " << b << endl;

	// 숙제
	// 정수 하나를 입력받고 그 숫자가 홀수인지 짝수인지 출력하는 프로그램을 만들어 봅시다.

	int Num = 0;

	cin >> Num;

	bool bCheckNum = (Num / 2 == 0);

	if (bCheckNum)
		cout << "짝" << endl;
	else
		cout << "홀" << endl;



	return 0;
}
