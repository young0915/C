#include <iostream>
#include <array>
#include <functional>

using namespace std;
// 함수 포인터

int func()
{
	return 5;
}

int goo()
{
	return 10;
}


// 함수 포인터
bool isEven(const int& number)
{
	if (number % 2 == 0) return true;
	else return false;
}
// 함수 포인터
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

// typedef란 프로그래머가 타입의 별칭을 생성하고, 실제 타입 이름 대신 별칭을 사용할 수 있다
typedef bool(*check_fun_t)(const int&);
// 이렇게도 사용이 가능하다
//using check_fun_t = bool(*)(const int&);


// 함수 포인터 예
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


	// 더 활용적으로 사용할 수 있는 예
	std::function<bool(const int&)> fcnptrs = isEven;

	printNumbers(my_array, fcnptrs);

	fcnptrs = isOdd;
	printNumbers(my_array, fcnptrs);

	return 0;
}

// 힙영역에 메모리를 쌓아두면 메모리 누수가 발생한다.