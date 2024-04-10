#include <iostream>
#include <array>
#include <functional>

using namespace std;
// �Լ� ������

int func()
{
	return 5;
}

int goo()
{
	return 10;
}


// �Լ� ������
bool isEven(const int& number)
{
	if (number % 2 == 0) return true;
	else return false;
}
// �Լ� ������
bool isOdd(const int& number)
{
	if (number % 2 != 0) return true;
	else return false;
}


void printNumbers(const array<int, 10>& my_array, bool print_even)
{
	for (auto element : my_array)
	{
		// 02468
		if (print_even && element % 2 == 0)
			cout << element;
		else if (!print_even && element % 2 != 0)
			cout << element;
	}
	cout << endl;

}

// typedef�� ���α׷��Ӱ� Ÿ���� ��Ī�� �����ϰ�, ���� Ÿ�� �̸� ��� ��Ī�� ����� �� �ִ�
typedef bool(*check_fun_t)(const int&);
// �̷��Ե� ����� �����ϴ�
//using check_fun_t = bool(*)(const int&);


// �Լ� ������ ��
void printNumbers(const array<int, 10>& my_array, check_fun_t fun_t = isEven)
{
	for (auto element : my_array)
	{
		// 02468
		if ((fun_t(element) == true) && element % 2 == 0)
			cout << element;
		else  if (!(fun_t(element) == true) && element % 2 != 0)
			cout << element;
	}
	cout << endl;

}

void printNumbers(const array<int, 10>& my_array, std::function<bool(const int&)> fun_t = isEven)
{
	for (auto element : my_array)
	{
		// 02468
		if ((fun_t(element) == true) && element % 2 == 0)
			cout << element;
		else if (!(fun_t(element) == true) && element % 2 != 0)
			cout << element;

	}
	cout << endl;

}


int main()
{

	//005211F9
	cout << func() << endl;


	int(*fcnptr)() = func;

	// 5
	cout << fcnptr() << endl;

	fcnptr = goo;

	// 10
	cout << fcnptr() << endl;

	std::array<int, 10> my_array{ 0,1,2,3,4,5,6,7,8,9 };

	for (auto element : my_array)
	{
		// 02468
		if (element % 2 == 0)
			cout << element;
	}

	//13579
	printNumbers(my_array, false);

	// 13579
	printNumbers(my_array, isEven);

	//02468
	printNumbers(my_array, isOdd);


	// �� Ȱ�������� ����� �� �ִ� ��
	std::function<bool(const int&)> fcnptrs = isEven;

	printNumbers(my_array, fcnptrs);

	fcnptrs = isOdd;
	printNumbers(my_array, fcnptrs);

	return 0;
}

// �������� �޸𸮸� �׾Ƶθ� �޸� ������ �߻��Ѵ�.