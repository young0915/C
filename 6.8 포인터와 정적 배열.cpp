#include <iostream>

using namespace std;

// 6.8 포인터와 정적 배열

struct MyStruct 
{
	int array[5] = { 9,7,5,3,1 };
};

void Something(MyStruct ms)
{
	cout << sizeof(ms.array) << endl;
	// 20 -> Something(&ms) -> 출력할경우 
	//cout << sizeof((*ms).array) << endl;
}

void PointArray(int array[]) // == int* array 동일함.
{
	//4 내부적으로 포인터임
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
	// 9 -> 첫번째 값이 출력되는 걸 확인할 수 잇따.
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
	//// 4 -> 포인터 변수로 출력된거임
	//cout << sizeof(ptr) << endl;

	
	 PointArray(array);

	 // 100  100
	 cout << array[0] << "  " << *array << endl;

	 // 포인터 연산
	 // 100 7
	 cout << *ptr << " " << *(ptr + 1) << endl;


	 MyStruct ms;
	 // 9
	 cout << ms.array[0] << endl;

	 //20
	 Something(ms);
	return 0;
}