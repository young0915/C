#include <iostream>

using namespace std;

// 6.11 �޸� ���� �Ҵ� new�� delete

// static ���α׷��� ����ɶ����� ��� ����ִ� �޸� ����
// �ڵ� �޸� �Ҵ� ������ �����ϰų� �Ǵ� ���� �迭�� ������ ���� �� �� ������ ������ ���� ������� �ٽ� �޸𸮰� os�� �Ҵ��� ��
// ���� �޸� �Ҵ� 

int main()
{
	
	int array[100];

	// int var;
	// var = 7;
	int* ptr = new int{7};

	// 005A0F88
	cout << ptr << endl;
	// 7
	cout << *ptr << endl;

	// �޸� �ݳ�.
	// �޸� �ݳ��� ptr�� ȣ��� �̻��� ���� ���´�.
	delete ptr;
	ptr = nullptr; // �ƹ� �ǹ� ���°����� �ǹ��Ѵ�.

	cout << "after delete " << endl;
	// ��� �ڵ�
	if (ptr != nullptr)
	{
		cout << ptr << endl;
		cout << *ptr << endl;
	 }
	else
	{
		cout << " Could not value";
	}


	// �޸� ����
	// �޸� ��� ����⸸��
	// while���� �߰ߵ� �� �ִ�.
	//

	return 0;
}