#include <iostream>
// 2.9 �ɺ��� ��� Symbolic Constants

#define PRICE_PER_ITEM 30
#include "myconst.h" // const ��Ƶ� ��.

using namespace std;

						// �ٲ��� �ʵ��� const Ű���带 ������� ���ϵ���.
void printNumber(const int my_number)
{
	int n = my_number;

	cout << n << endl;
}

int main()
{

	printNumber(123);
	const double garvity{ 9.8 };		
	// �� �������� ���� ��ȭ���� �ʰ� �����ǵ��� constŰ���带 ����ϸ� �ȴ�.
	// const Ű���带 ����Ѵٸ� �ݵ�� �ʱ�ȭ�� ������Ѵ�.
	// 


	// �����Ϸ� �Ҷ� �̹� �����Ǿ� �־ my_cosnt�� 123�� �����Ǿ� �ִ�. ��, �����Ϸ� ���
	const int my_cosnt(123);
	constexpr int my_constexp(123);
	// constexpr�̶� const + expression : ������ Ÿ�ӿ� ������ �����Ǵ� ������ �Ѵ�.
	// ���� ��Ÿ�� ��������� ����� �Ұ��ϴ�. ������ ���״�� ��Ÿ�� ����� ��Ÿ�Ӷ� �����Ǳ� �����̴�.


	int number;
	cin >> number;

	const int special_number(number);
	// ��Ÿ�� ���.
	
	int num_item = 123;

	const int price_per_itme = 30;

	//int price = num_item * PRICE_PER_ITEM; // -> C��� �����. �̷��� �ϸ� ������ϱ� �����.
	int price = num_item * price_per_itme; // -> �ٶ����� ǥ��.

	double radius;
	cin >> radius;


	double circumference = 2.0 * radius * constants::pi;

	return 0;
}