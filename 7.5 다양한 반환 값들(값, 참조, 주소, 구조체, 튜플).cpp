#include <iostream>
#include <array>
#include <tuple>

using namespace std;

// 7.5 �پ��� ��ȯ ����(��, ����, �ּ�, ����ü, Ʃ��)


// int getValue(int x)���� ������ ������ ���� �̷��͵��� ������ �Ͼ�ٶ�°� ����

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
	//���� ����
	// ���簡 ���ٺ��� ���赵�� �߻� -> float'���� 'int'(��)�� ��ȯ�ϸ鼭 �����Ͱ� �սǵ� �� �ֽ��ϴ�.
	/*int value = *getValue(3);
	cout << value << endl;*/


	//int* array = allocateMemory(1024); //�ּҸ� ����

	//delete[] array;

	////  ������ �ϴ� ����
	//// ���۷��� �Լ����� ȣ�� �� ���� �Ͻ������� ������� ����(�߿�)
	//int &vlaue1 = getValues(5);
	///*
	//
	//10
	//11604033
	//*/
	//cout << vlaue1 << endl;
	//cout << vlaue1 << endl;


	//// ���� ����Ѵٴ� ��. -> return by reference
	//std::array<int, 100> my_array;
	//my_array[30] = 10;

	//get(my_array, 30) = 1024;
	//// 1024
	//cout << my_array[30] << endl;

	//// ����ü�� ���ؼ� ���� �޾� �������� ���� �������� �Ѳ����� �޴� ȿ���� ��Ÿ��
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