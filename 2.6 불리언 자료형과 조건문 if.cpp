#include <iostream>
//�Ҹ��� �ڷ����� ���ǹ� if

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


	if (5) // 0�̸� false  1�̻���ʹ� true
	{
		cout << "true" << endl;
	}
	else
		cout << "false" << endl;


	bool b;

	cin >> b;
	cout << " Your input " << b << endl;

	// ����
	// ���� �ϳ��� �Է¹ް� �� ���ڰ� Ȧ������ ¦������ ����ϴ� ���α׷��� ����� ���ô�.

	int Num = 0;

	cin >> Num;

	bool bCheckNum = (Num / 2 == 0);

	if (bCheckNum)
		cout << "¦" << endl;
	else
		cout << "Ȧ" << endl;



	return 0;
}
