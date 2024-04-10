#include <iostream>
#include <array>
#include <tuple>

using namespace std;

// 7.5 다양한 반환 값들(값, 참조, 주소, 구조체, 튜플)


// int getValue(int x)복사 다음에 변수의 생성 이런것들이 여러번 일어난다라는게 단점

//int* getValue(int x)
//{
//	int value = x * 2;
//	return &value;
//}
//
//int& getValues(int x)
//{
//	int value = x * 2;
//	return value;
//}
//
//int* allocateMemory(int size)
//{
//	return new int[size];
//}
//
//int& get(std::array<int, 100>& my_array, int ix)
//{
//	return my_array[ix];
//}
//
//struct S
//{
//	int a, b, c, d;
//};
//
//S getStruct()
//{
//	S my_s{ 1,2,3,4 };
//}

std::tuple<int, double> getTuple()
{
	int a = 10;
	double b = 3.14;

	return std::make_tuple(a,b);

}

int main()
{
	//값을 리턴
	// 복사가 많다보니 위험도가 발생 -> float'에서 'int'(으)로 변환하면서 데이터가 손실될 수 있습니다.
	/*int value = *getValue(3);
	cout << value << endl;*/


	//int* array = allocateMemory(1024); //주소를 리턴

	//delete[] array;

	////  참조를 하느 리턴
	//// 레퍼런스 함수에서 호출 후 값이 일시적으로 사라지는 단점(중요)
	//int &vlaue1 = getValues(5);
	///*
	//
	//10
	//11604033
	//*/
	//cout << vlaue1 << endl;
	//cout << vlaue1 << endl;


	//// 자주 사용한다는 예. -> return by reference
	//std::array<int, 100> my_array;
	//my_array[30] = 10;

	//get(my_array, 30) = 1024;
	//// 1024
	//cout << my_array[30] << endl;

	//// 구조체를 통해서 리턴 받아 버리면은 값을 여러개를 한꺼번에 받는 효과를 나타냄
	//S my_s = getStruct();
	//my_s.a = 10;


	/*
	10
	3.14
	*/
	std::tuple<int, double> tp = getTuple();

	cout << std::get<0>(tp) << endl;
	cout << std::get<1>(tp) << endl;

	// C++17 
	auto [a,b] = getTuple();
	// 10 3.14
	cout << a << " " << b << endl;
	return 0;
}