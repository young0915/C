#include <iostream>

using namespace std;

// 6.8 �����Ϳ� ���� �迭

struct MyStruct 
{
	int array[5] = { 9,7,5,3,1 };
};

void Something(MyStruct ms)
{
	cout << sizeof(ms.array) << endl;
	// 20 -> Something(&ms) -> ����Ұ�� 
	//cout << sizeof((*ms).array) << endl;
}

void PointArray(int array[]) // == int* array ������.
{
	//4 ���������� ��������
	cout << sizeof(array) << endl;
	// 9
	cout << *array << endl;
	*array = 100;
}


int main()
{
	int array[5] = { 9,7,5,3,1 };

	// 9 7
	cout << array[0] << " " << array[1] << endl;
	//0097FB44
	cout << array << endl;
	//0097FB44
	cout << &(array[0]) << endl;
	// 9 -> ù��° ���� ��µǴ� �� Ȯ���� �� �յ�.
	cout << *array << endl;

	int* ptr = array;
	//0097FB44
	cout << ptr << endl;
	// 9
	cout << *ptr << endl;


	char name[] = "jackjack";
	cout << *name << endl;



	//// 20
	//cout << sizeof(array) << endl;

	//int* ptr = array;
	//// 4 -> ������ ������ ��µȰ���
	//cout << sizeof(ptr) << endl;

	
	 PointArray(array);

	 // 100  100
	 cout << array[0] << "  " << *array << endl;

	 // ������ ����
	 // 100 7
	 cout << *ptr << " " << *(ptr + 1) << endl;


	 MyStruct ms;
	 // 9
	 cout << ms.array[0] << endl;

	 //20
	 Something(ms);
	return 0;
}