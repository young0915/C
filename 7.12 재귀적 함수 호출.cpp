#include <iostream>
#include <cassert>
#include <array>

using namespace std;

//7.12 ����� �Լ� ȣ��
// 7.13 ����� ���α׷����� ����
// 7.14 �ܾ��ϱ� assert

int Fibonachi(int n)
{

	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	else
		return Fibonachi(n - 1) + Fibonachi(n - 2);
}

void printValue(const array<int, 5> &my_array, const int& ix)
{

	// ������ Ȯ���ϱ� ���� assert�� ����� �� �ִ�.
	assert(ix >= 0);
	assert(ix <= my_array.size() - 1);
	// 5
	cout << my_array[ix] << endl;
}

int main()
{

	cout << Fibonachi(5) << " ";

	cout << endl;

	/*int x;
	cin >> x;

	if (x > 5)
		cout << " x is greater than 5 " << endl;
*/

	// // 7.14 �ܾ��ϱ� assert


	int number = 5;

	// number should be 5
	assert(number == 5);


	std::array<int, 5> my_array{ 1,2,3,4,5 };

	// ���� 4��� 100�� ������ ��� �ɱ�?
	// ���̺��� ġ�� �������� �𸣰� ������ �ͺ��� �̻� ������ ������ ������ �߻��Ѵ�
	// �׷��� assertŰ���带 �־ Ȯ���ϴ� ���̴�.
	printValue(my_array, 4);


	const int x = 10;

	assert(x == 5);

	// ���� �߻�!
	//static_assert(x == 5, "x should be 5 ");
	

	return 0;
}